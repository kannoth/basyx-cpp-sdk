/*******************************************************************************
 * Copyright (C) 2021 the Eclipse BaSyx Authors
 * 
 * This program and the accompanying materials are made
 * available under the terms of the Eclipse Public License 2.0
 * which is available at https://www.eclipse.org/legal/epl-2.0/
 * 
 * SPDX-License-Identifier: EPL-2.0
 ******************************************************************************/

#include <BaSyx/aas/simple/submodelelement/Capability.h>
#include <BaSyx/aas/map_v2/submodelelement/Capability.h>


namespace basyx {
namespace aas {
namespace simple {

Capability::Capability(const std::string & idShort, ModelingKind kind)
  : SubmodelElement{ idShort, kind }
{}

}
}
}
