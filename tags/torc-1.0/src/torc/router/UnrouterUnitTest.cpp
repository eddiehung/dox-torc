// Torc - Copyright 2011-2013 University of Southern California.  All Rights Reserved.
// $HeadURL$
// $Id$

// This program is free software: you can redistribute it and/or modify it under the terms of the 
// GNU General Public License as published by the Free Software Foundation, either version 3 of the 
// License, or (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; 
// without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See 
// the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License along with this program.  If 
// not, see <http://www.gnu.org/licenses/>.

/// \file
/// \brief Regression test for the Unrouter class.

#include <boost/test/unit_test.hpp>
#include "torc/architecture/XdlImporter.hpp"
#include "torc/architecture/DDB.hpp"
#include "torc/router/Trace.hpp"
#include <map>

//#include <boost/filesystem/convenience.hpp>
#include "torc/common/DirectoryTree.hpp"
//#include "torc/physical/Factory.hpp"
//#include "torc/physical/XdlExporter.hpp"
#include "torc/physical/OutputStreamHelpers.hpp"
#include "torc/common/TestHelpers.hpp"
#include <fstream>

namespace torc {
namespace router {

struct TracerTestFixture {
	int& argc;
	char**&argv;
	torc::common::DirectoryTree directoryTree;
	boost::filesystem::path testPath;
	boost::filesystem::path referencePath;
	std::fstream fileStream;
	architecture::XdlImporter importer;
	torc::physical::DesignSharedPtr designPtr;
	architecture::DDB* ddbPtr;
	std::map<architecture::Tilewire, int> sinkCounts;
	architecture::Tilewire sourceTw;
	architecture::Tilewire sourceTw2;
	
	TracerTestFixture() : argc(boost::unit_test::framework::master_test_suite().argc),
			argv(boost::unit_test::framework::master_test_suite().argv),
			directoryTree(argv[0]),
			testPath(directoryTree.getExecutablePath() / "torc" / "router"),
			referencePath(testPath / "TracerUnitTest.xdl"),
			fileStream(referencePath.string().c_str())
			//importer(fileStream, referencePath.string()),
			//ddbPtr(importer.releaseDDBPtr()),
			//tracer(*ddbPtr)
	{
		BOOST_REQUIRE(argc >= 1);
		BOOST_REQUIRE(fileStream.good());
		importer(fileStream, referencePath.string());
		designPtr = importer.getDesignPtr();
		BOOST_REQUIRE(designPtr.get() != 0);
		ddbPtr = importer.releaseDDBPtr();
		BOOST_REQUIRE(ddbPtr != 0);
		//tracer(*ddbPtr);
		
		BOOST_CHECK_EQUAL(designPtr->getNetCount(), 1u);
		BOOST_CHECK_EQUAL(ddbPtr->getArcUsage().getArcUsageCount(), 53u);
		//BOOST_TEST_MESSAGE("Should the pip count really include the routethrough?");
		//BOOST_CHECK_EQUAL(ddbPtr->getArcUsage().getArcUsageCount(), 54u);
		
		sourceTw = ddbPtr->lookupTilewire("CLBLL_X16Y39", "L_C");
		sourceTw2 = ddbPtr->lookupTilewire("CLBLL_X16Y39", "L_CMUX");
		
		architecture::Tilewire tempTw;
		tempTw = ddbPtr->lookupTilewire("CLBLM_X13Y42", "L_D1");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLM_X18Y36", "L_A1");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLM_X18Y36", "L_D3");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLM_X13Y36", "M_B6");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLM_X13Y36", "M_C5");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLM_X13Y36", "M_D3");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLM_X13Y42", "L_D2");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLL_X16Y42", "L_A1");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLL_X16Y42", "L_CE");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLM_X18Y40", "L_BX");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
		tempTw = ddbPtr->lookupTilewire("CLBLM_X18Y40", "L_B4");
		sinkCounts.insert(std::pair<architecture::Tilewire, int>(tempTw, 0));
	}
	~TracerTestFixture() {
		delete ddbPtr;
	}
};

BOOST_FIXTURE_TEST_SUITE(router, TracerTestFixture)
/*
/// \brief Unit test for the traceSource function in the Tracer.
BOOST_AUTO_TEST_CASE(router_unrouter_tracetosinks) {
	Tracer tracer(*ddbPtr);
	RouteTreeNode* rtn;
	RouteTreeNode* rtn2;
	rtn = tracer.traceToSinks(sourceTw);
	rtn2 = tracer.traceToSinks(sourceTw2);
	rtn->normalizeDepth();
	rtn2->normalizeDepth();
	std::vector<RouteTreeNode*> vec;
	std::vector<RouteTreeNode*> wavefront;
	//vec.push_back(rtn);
	//vec.push_back(rtn2);
	wavefront.push_back(rtn);
	wavefront.push_back(rtn2);
	while (wavefront.size() != 0) {
		RouteTreeNode* node = wavefront.back();
		wavefront.pop_back();
		vec.push_back(node);
		for (unsigned int i = 0; i < node->getNumChildren(); i++) {
			wavefront.push_back(node->getChild(i));
		}
	}
	std::map<architecture::Tilewire, int>::iterator it;
	for (unsigned int i = 0 ; i < vec.size(); i++) {
		it = sinkCounts.find(vec[i]->getSinkTilewire());
		if (it != sinkCounts.end()) {
			it->second++;
		}
	}
	BOOST_TEST_MESSAGE(*ddbPtr);
	for (it = sinkCounts.begin(); it != sinkCounts.end(); it++) {
		BOOST_TEST_MESSAGE("Checking sink " << it->first);
		BOOST_CHECK(it->second == 1);
	}
}

/// \brief Unit test for the traceBranch function in the Tracer.
BOOST_AUTO_TEST_CASE(router_unrouter_tracebranch) {
	Tracer tracer(*ddbPtr);
	architecture::Tilewire branchSource = ddbPtr->lookupTilewire("INT_X14Y37", "SL2END0");
	RouteTreeNode* rtn;
	rtn = tracer.traceBranch(branchSource);
	rtn->normalizeDepth();
	std::vector<RouteTreeNode*> vec;
	std::vector<RouteTreeNode*> wavefront;
	vec.push_back(rtn);
	wavefront.push_back(rtn);
	while (wavefront.size() != 0) {
		RouteTreeNode* node = wavefront.back();
		wavefront.pop_back();
		vec.push_back(node);
		for (unsigned int i = 0; i < node->getNumChildren(); i++) {
			wavefront.push_back(node->getChild(i));
		}
	}
	std::map<architecture::Tilewire, int>::iterator it;
	for (unsigned int i = 0 ; i < vec.size(); i++) {
std::cout << "NODE: " << vec[i]->getArc() << std::endl;
		it = sinkCounts.find(vec[i]->getSinkTilewire());
		if (it != sinkCounts.end()) {
			it->second++;
		}
	}
	BOOST_TEST_MESSAGE(*ddbPtr);
	for (it = sinkCounts.begin(); it != sinkCounts.end(); it++) {
		BOOST_TEST_MESSAGE("Checking sink " << it->first);
		BOOST_CHECK_EQUAL(it->second, 1);
		//std::cout << it->first << " " << it->second << std::endl;
	}
}

/// \brief Unit test for the traceSink function in the Tracer.
BOOST_AUTO_TEST_CASE(router_unrouter_tracesink) {
}

/// \brief Unit test for the traceFull function in the Tracer.
BOOST_AUTO_TEST_CASE(router_unrouter_tracefull) {
	Tracer tracer(*ddbPtr);
	architecture::Tilewire branchSource = ddbPtr->lookupTilewire("INT_X14Y37", "SL2END0");
std::cout << *ddbPtr << "START: " << branchSource << std::endl;
	RouteTreeNode* rtn;
	rtn = tracer.traceFull(branchSource);
	rtn->normalizeDepth();
	rtn = (RouteTreeNode*)rtn->getTop();
	std::vector<RouteTreeNode*> vec;
	std::vector<RouteTreeNode*> wavefront;
	wavefront.push_back(rtn);
	while (wavefront.size() != 0) {
		RouteTreeNode* node = wavefront.back();
		wavefront.pop_back();
		vec.push_back(node);
		for (unsigned int i = 0; i < node->getNumChildren(); i++) {
			wavefront.push_back(node->getChild(i));
		}
	}
	std::map<architecture::Tilewire, int>::iterator it;
	for (unsigned int i = 0 ; i < vec.size(); i++) {
std::cout << "NODE: " << vec[i]->getArc() << std::endl;
		it = sinkCounts.find(vec[i]->getSinkTilewire());
		if (it != sinkCounts.end()) {
			it->second++;
		}
	}
	BOOST_TEST_MESSAGE(*ddbPtr);
	for (it = sinkCounts.begin(); it != sinkCounts.end(); it++) {
		BOOST_TEST_MESSAGE("Checking sink " << it->first);
		BOOST_CHECK_EQUAL(it->second, 1);
		//std::cout << it->first << " " << it->second << std::endl;
	}
}
*/
BOOST_AUTO_TEST_SUITE_END()

} // namespace router
} // namespace torc
