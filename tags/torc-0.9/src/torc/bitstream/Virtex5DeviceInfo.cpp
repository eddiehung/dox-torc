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
/// \brief Static definition of the Virtex5 class.
/// \details This is a generated file.  Please modify with care.

#include "torc/bitstream/Virtex5.hpp"

namespace torc {
namespace bitstream {

	enum { Empty = Virtex5::eColumnTypeEmpty, Bram = Virtex5::eColumnTypeBram, 
		Clb = Virtex5::eColumnTypeClb, Clock = Virtex5::eColumnTypeClock, 
		Dsp = Virtex5::eColumnTypeDsp, Gtx = Virtex5::eColumnTypeGtx, 
		Iob = Virtex5::eColumnTypeIob, END = boost::uint32_t(-1) };

	// xc5vfx30t static device information.
	boost::uint32_t xc5vfx30tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vfx30t(11926, 89, 134, xc5vfx30tColumns);

	// xc5vfx70t static device information.
	boost::uint32_t xc5vfx70tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vfx70t(23718, 177, 134, xc5vfx70tColumns);

	// xc5vfx100t static device information.
	boost::uint32_t xc5vfx100tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vfx100t(33630, 177, 190, xc5vfx100tColumns);

	// xc5vfx130t static device information.
	boost::uint32_t xc5vfx130tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vfx130t(41990, 221, 190, xc5vfx130tColumns);

	// xc5vfx200t static device information.
	boost::uint32_t xc5vfx200tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vfx200t(59360, 265, 224, xc5vfx200tColumns);

	// xc5vlx30 static device information.
	boost::uint32_t xc5vlx30Columns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, END };
	DeviceInfo xc5vlx30(8633, 89, 97, xc5vlx30Columns);

	// xc5vlx50 static device information.
	boost::uint32_t xc5vlx50Columns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, END };
	DeviceInfo xc5vlx50(12901, 133, 97, xc5vlx50Columns);

	// xc5vlx85 static device information.
	boost::uint32_t xc5vlx85Columns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, END };
	DeviceInfo xc5vlx85(20881, 133, 157, xc5vlx85Columns);

	// xc5vlx110 static device information.
	boost::uint32_t xc5vlx110Columns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, END };
	DeviceInfo xc5vlx110(27789, 177, 157, xc5vlx110Columns);

	// xc5vlx155 static device information.
	boost::uint32_t xc5vlx155Columns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, END };
	DeviceInfo xc5vlx155(38055, 177, 215, xc5vlx155Columns);

	// xc5vlx220 static device information.
	boost::uint32_t xc5vlx220Columns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, END };
	DeviceInfo xc5vlx220(50799, 177, 287, xc5vlx220Columns);

	// xc5vlx330 static device information.
	boost::uint32_t xc5vlx330Columns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, END };
	DeviceInfo xc5vlx330(76055, 265, 287, xc5vlx330Columns);

	// xc5vlx20t static device information.
	boost::uint32_t xc5vlx20tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vlx20t(5896, 67, 88, xc5vlx20tColumns);

	// xc5vlx30t static device information.
	boost::uint32_t xc5vlx30tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vlx30t(9256, 89, 104, xc5vlx30tColumns);

	// xc5vlx50t static device information.
	boost::uint32_t xc5vlx50tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vlx50t(13832, 133, 104, xc5vlx50tColumns);

	// xc5vlx85t static device information.
	boost::uint32_t xc5vlx85tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vlx85t(21812, 133, 164, xc5vlx85tColumns);

	// xc5vlx110t static device information.
	boost::uint32_t xc5vlx110tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vlx110t(29028, 177, 164, xc5vlx110tColumns);

	// xc5vlx155t static device information.
	boost::uint32_t xc5vlx155tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vlx155t(39294, 177, 222, xc5vlx155tColumns);

	// xc5vlx220t static device information.
	boost::uint32_t xc5vlx220tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vlx220t(52038, 177, 294, xc5vlx220tColumns);

	// xc5vlx330t static device information.
	boost::uint32_t xc5vlx330tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vlx330t(77910, 265, 294, xc5vlx330tColumns);

	// xc5vsx35t static device information.
	boost::uint32_t xc5vsx35tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vsx35t(12282, 89, 138, xc5vsx35tColumns);

	// xc5vsx50t static device information.
	boost::uint32_t xc5vsx50tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vsx50t(18354, 133, 138, xc5vsx50tColumns);

	// xc5vsx95t static device information.
	boost::uint32_t xc5vsx95tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vsx95t(32568, 177, 184, xc5vsx95tColumns);

	// xc5vsx240t static device information.
	boost::uint32_t xc5vsx240tColumns[] = { Iob, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vsx240t(71020, 265, 268, xc5vsx240tColumns);

	// xc5vtx150t static device information.
	boost::uint32_t xc5vtx150tColumns[] = { Gtx, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vtx150t(40222, 221, 182, xc5vtx150tColumns);

	// xc5vtx240t static device information.
	boost::uint32_t xc5vtx240tColumns[] = { Gtx, Empty, Empty, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Dsp, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Clock, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Bram, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Empty, Empty, Empty, Iob, Empty, Empty, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Clb, Empty, Empty, Bram, Empty, Empty, Empty, Empty, Gtx, END };
	DeviceInfo xc5vtx240t(61215, 265, 231, xc5vtx240tColumns);

} // namespace bitstream
} // namespace torc