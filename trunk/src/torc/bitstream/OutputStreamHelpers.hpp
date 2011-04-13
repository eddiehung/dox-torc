// Torc - Copyright 2011 University of Southern California.  All Rights Reserved.
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
/// \brief Header for torc::bitstream output stream helpers.

#ifndef TORC_BITSTREAM_OUTPUT_STREAM_HELPERS_HPP
#define TORC_BITSTREAM_OUTPUT_STREAM_HELPERS_HPP

#include <iosfwd>

namespace torc {
namespace bitstream {

	class Bitstream;
	class Spartan16Bitstream;
	
	class Spartan3E;
	class Spartan6;

	class Virtex;
	class Virtex2;
	class Virtex4;
	class Virtex5;
	class Virtex6;

	/// \brief Spartan16Bitstream stream inserter.
	std::ostream& operator <<(std::ostream& os, const Spartan16Bitstream& rhs);
	/// \brief Bitstream stream inserter.
	std::ostream& operator <<(std::ostream& os, const Bitstream& rhs);
	/// \brief Spartan3E stream inserter.
	std::ostream& operator <<(std::ostream& os, const Spartan3E& rhs);
	/// \brief Spartan6 stream inserter.
	std::ostream& operator <<(std::ostream& os, const Spartan6& rhs);
	/// \brief Virtex stream inserter.
	std::ostream& operator <<(std::ostream& os, const Virtex& rhs);
	/// \brief Virtex2 stream inserter.
	std::ostream& operator <<(std::ostream& os, const Virtex2& rhs);
	/// \brief Virtex4 stream inserter.
	std::ostream& operator <<(std::ostream& os, const Virtex4& rhs);
	/// \brief Virtex5 stream inserter.
	std::ostream& operator <<(std::ostream& os, const Virtex5& rhs);
	/// \brief Virtex6 stream inserter.
	std::ostream& operator <<(std::ostream& os, const Virtex6& rhs);

	class Hex16 {
		uint16_t mWord;
	public:
		Hex16(uint16_t rhs) : mWord(rhs) {};
		friend std::ostream& operator <<(std::ostream& os, const Hex16& rhs);
	};

	class Hex32 {
		uint32_t mWord;
	public:
		Hex32(uint32_t rhs) : mWord(rhs) {};
		friend std::ostream& operator <<(std::ostream& os, const Hex32& rhs);
	};

	/// \brief 16-bit word hex inserter.
	std::ostream& operator <<(std::ostream& os, const Hex16& rhs);
	
	/// \brief 32-bit word hex inserter.
	std::ostream& operator <<(std::ostream& os, const Hex32& rhs);

} // namespace bitstream
} // namespace torc

#endif // TORC_BITSTREAM_OUTPUT_STREAM_HELPERS_HPP