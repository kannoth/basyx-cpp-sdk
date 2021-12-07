/*******************************************************************************
 * Copyright (C) 2021 the Eclipse BaSyx Authors
 * 
 * This program and the accompanying materials are made
 * available under the terms of the Eclipse Public License 2.0
 * which is available at https://www.eclipse.org/legal/epl-2.0/
 * 
 * SPDX-License-Identifier: EPL-2.0
 ******************************************************************************/

#ifndef BASYX_SUBMODEL_ENUMERATIONS_MODELINGKIND_H
#define BASYX_SUBMODEL_ENUMERATIONS_MODELINGKIND_H

#include <string>

namespace basyx {
namespace aas {

enum class ModelingKind {
    Template,
    Instance,
};

class ModelingKind_
{
public:
    static ModelingKind from_string(const std::string & name);
    static const char * to_string(ModelingKind value);
};


}
}

#endif /* BASYX_SUBMODEL_ENUMERATIONS_MODELINGKIND_H */
