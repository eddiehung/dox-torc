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

// FILE : scanner.hpp
// DATE : 08-July-2010
// DESCRIPTION : Declaration of torc::generic::Scanner class 
// REVISION HISTORY:
// SI        REVISION        AUTHOR               CHANGES          PRs
// [0]    Initial Version    Niladri

#ifndef TORC_GENERIC_EDIF_SCANNER_HPP
#define TORC_GENERIC_EDIF_SCANNER_HPP

// Flex expects the signature of yylex to be defined in the macro YY_DECL, and
// the C++ parser expects it to be declared. We can factor both as follows.

#ifndef YY_DECL

#define YY_DECL										\
	torc::generic::Parser::token_type				\
	torc::generic::Scanner::lex(					\
		torc::generic::Parser::semantic_type* yylval,	\
		torc::generic::Parser::location_type* yylloc	\
	)
#endif

#ifndef __FLEX_LEXER_H
#define yyFlexLexer EdifFlexLexer
#include "torc/generic/edif/FlexLexer.h"
#undef EdifFlexLexer
#endif

#include "torc/generic/edif/Parser.h"

namespace torc {
namespace generic {

/** Scanner is a derived class to add some extra function to the scanner
 * class. Flex itself creates a class named FlexLexer, which is renamed using
 * macros to EdifFlexLexer. However we change the context of the generated
 * yylex() function to be contained within the Scanner class. This is required
 * because the yylex() defined in EdifFlexLexer has no parameters. */
class Scanner : public EdifFlexLexer {
public:
	/** Create a new scanner object. The streams arg_yyin and arg_yyout default
	 * to cin and cout, but that assignment is only made when initializing in
	 * yylex(). */
	Scanner(std::istream* arg_yyin = 0, std::ostream* arg_yyout = 0);

	/** Required for virtual functions */
	virtual ~Scanner();

	/** This is the main lexing function. It is generated by flex according to
	 * the macro declaration YY_DECL above. The generated bison parser then
	 * calls this virtual function to fetch new tokens. */
	virtual Parser::token_type lex(Parser::semantic_type* yylval, Parser::location_type* yylloc);

	/** Enable debug output (via arg_yyout) if compiled into the scanner. */
	void set_debug(bool b);

	inline bool getIsIdContext() const;

	inline void setIsIdContext(bool inIsIdContext);

	void skipThisRule(char *yytext);

	inline bool getAppendToBuffer();

	void setAppendToBuffer(bool inAppendToBuffer);

	void resetBuffer();

	void addToBuffer(const char *str);

	inline std::string getBuffer();

	inline bool getAppendToUserDataBuffer();

	void setAppendToUserDataBuffer(bool inAppendToBuffer);

	void addToUserDataBuffer(const char *str);

	void resetUserDataBuffer();

	inline std::string getUserDataBuffer();

private:
	bool mIsIdContext;
	bool mAppendToBuffer;
	bool mAppendToUserDataBuffer;
	std::string mBuffer;
	std::string mUserDataBuffer;
	bool mIsIdAlreadyAdded;
};

inline bool Scanner::getIsIdContext() const {
	return mIsIdContext;
}

inline void Scanner::setIsIdContext(bool inIsIdContext) {
	mIsIdContext = inIsIdContext;
}

inline bool Scanner::getAppendToBuffer() {
	return mAppendToBuffer;
}

inline std::string Scanner::getBuffer() {
	return mBuffer;
}

inline bool Scanner::getAppendToUserDataBuffer() {
	return mAppendToUserDataBuffer;
}

inline std::string Scanner::getUserDataBuffer() {
	return mUserDataBuffer;
}

} // namespace generic
} // namespace torc

#endif // TORC_GENERIC_EDIF_SCANNER_HPP
