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

#ifndef TORC_GENERIC_UNIT_HPP
#define TORC_GENERIC_UNIT_HPP

namespace torc {
namespace generic {

/**
 * @enum Unit
 *
 * Represents the different units defined in EDIF.
 */
enum Unit {
	eUnitUndefined, eUnitAngle, eUnitCapacitance, eUnitConductance, eUnitCharge, eUnitCurrent,
	eUnitDistance, eUnitEnergy, eUnitFlux, eUnitFrequency, eUnitInductance, eUnitMass, eUnitPower,
	eUnitResistance, eUnitTemperature, eUnitTime, eUnitVoltage
};

} // namespace generic
} // namespace torc

#endif // TORC_GENERIC_UNIT_HPP
