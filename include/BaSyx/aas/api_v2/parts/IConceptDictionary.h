/*******************************************************************************
 * Copyright (C) 2021 the Eclipse BaSyx Authors
 * 
 * This program and the accompanying materials are made
 * available under the terms of the Eclipse Public License 2.0
 * which is available at https://www.eclipse.org/legal/epl-2.0/
 * 
 * SPDX-License-Identifier: EPL-2.0
 ******************************************************************************/

#ifndef BASYX_SUBMODEL_API_V2_PARTS_ICONCEPTDICTIONARY_H
#define BASYX_SUBMODEL_API_V2_PARTS_ICONCEPTDICTIONARY_H

#include <BaSyx/aas/api_v2/parts/IConceptDescription.h>

namespace basyx {
namespace aas {
namespace api {

class IConceptDictionary
    : public virtual IReferable
{
public:
  virtual ~IConceptDictionary() = 0;

  virtual const IElementContainer<IConceptDescription> & getConceptDescriptions() const = 0;
};

inline IConceptDictionary::~IConceptDictionary() = default;

}
}
}
#endif /* BASYX_SUBMODEL_API_V2_PARTS_ICONCEPTDICTIONARY_H */
