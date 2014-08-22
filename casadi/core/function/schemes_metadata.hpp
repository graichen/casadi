/*
 *    This file is part of CasADi.
 *
 *    CasADi -- A symbolic framework for dynamic optimization.
 *    Copyright (C) 2010 by Joel Andersson, Moritz Diehl, K.U.Leuven. All rights reserved.
 *
 *    CasADi is free software; you can redistribute it and/or
 *    modify it under the terms of the GNU Lesser General Public
 *    License as published by the Free Software Foundation; either
 *    version 3 of the License, or (at your option) any later version.
 *
 *    CasADi is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *    Lesser General Public License for more details.
 *
 *    You should have received a copy of the GNU Lesser General Public
 *    License along with CasADi; if not, write to the Free Software
 *    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/** All edits to this file will be lost - autogenerated by misc/autogencode.py */
#ifndef SCHEMES_METADATA_HPP
#define SCHEMES_METADATA_HPP
#include <vector>
#include <string>
#include <utility>
#include <map>
#include "../casadi_exception.hpp"
namespace casadi {
template <class T>
class IOSchemeVector;class Sparsity;
enum InputOutputScheme {
  SCHEME_ControlledDAEInput,
  SCHEME_ControlSimulatorInput,
  SCHEME_DPLEInput,
  SCHEME_DPLEOutput,
  SCHEME_HNLPInput,
  SCHEME_DAEInput,
  SCHEME_DAEOutput,
  SCHEME_RDAEInput,
  SCHEME_RDAEOutput,
  SCHEME_IntegratorInput,
  SCHEME_IntegratorOutput,
  SCHEME_LinsolInput,
  SCHEME_LinsolOutput,
  SCHEME_LpSolverInput,
  SCHEME_LpSolverOutput,
  SCHEME_LPStruct,
  SCHEME_NLPInput,
  SCHEME_NLPOutput,
  SCHEME_GradFInput,
  SCHEME_GradFOutput,
  SCHEME_JacGInput,
  SCHEME_JacGOutput,
  SCHEME_HessLagInput,
  SCHEME_HessLagOutput,
  SCHEME_NlpSolverInput,
  SCHEME_NlpSolverOutput,
  SCHEME_QcqpSolverInput,
  SCHEME_QcqpSolverOutput,
  SCHEME_QCQPStruct,
  SCHEME_QpSolverInput,
  SCHEME_QpSolverOutput,
  SCHEME_QPStruct,
  SCHEME_SDPInput,
  SCHEME_SDPOutput,
  SCHEME_SDPStruct,
  SCHEME_SDQPInput,
  SCHEME_SDQPOutput,
  SCHEME_SDQPStruct,
  SCHEME_SOCPInput,
  SCHEME_SOCPOutput,
  SCHEME_SOCPStruct,
  SCHEME_StabilizedQpSolverInput };

CASADI_CORE_EXPORT std::string getSchemeEntryName(InputOutputScheme scheme, int i);
CASADI_CORE_EXPORT std::string getSchemeEntryDoc(InputOutputScheme scheme, int i);
CASADI_CORE_EXPORT std::string getSchemeEntryEnumName(InputOutputScheme scheme, int i);
CASADI_CORE_EXPORT int getSchemeEntryEnum(InputOutputScheme scheme, const std::string &name);
CASADI_CORE_EXPORT int getSchemeSize(InputOutputScheme scheme);
CASADI_CORE_EXPORT std::string getSchemeName(InputOutputScheme scheme);
CASADI_CORE_EXPORT std::string getSchemeEntryNames(InputOutputScheme scheme);
} // namespace casadi
#endif //SCHEMES_METADATA_HPP

