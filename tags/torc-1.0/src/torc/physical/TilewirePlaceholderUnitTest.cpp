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
/// \brief Unit test for the TilewirePlaceholder class.

#include <boost/test/unit_test.hpp>
#include "torc/physical/TilewirePlaceholder.hpp"
#include "torc/architecture/Tilewire.hpp"

namespace torc {
namespace physical {

BOOST_AUTO_TEST_SUITE(physical)

/// \brief Unit test for the TilewirePlaceholder class.
BOOST_AUTO_TEST_CASE(TilewirePlaceholderUnitTest) {
	// features tested:
	//		sizeof(TilewirePlaceholder)
	BOOST_CHECK_EQUAL(sizeof(torc::architecture::Tilewire), sizeof(TilewirePlaceholder));
}

BOOST_AUTO_TEST_SUITE_END()

} // namespace physical
} // namespace torc
