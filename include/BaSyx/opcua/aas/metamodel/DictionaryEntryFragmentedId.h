/*******************************************************************************
 * Copyright (C) 2021 the Eclipse BaSyx Authors
 * 
 * This program and the accompanying materials are made
 * available under the terms of the Eclipse Public License 2.0
 * which is available at https://www.eclipse.org/legal/epl-2.0/
 * 
 * SPDX-License-Identifier: EPL-2.0
 ******************************************************************************/

#ifndef DICTIONARY_ENTRY_FRAGMENTED_ID_H
#define DICTIONARY_ENTRY_FRAGMENTED_ID_H

#include <BaSyx/opcua/common/NodeId.h>
#include <BaSyx/opcua/common/Services.h>
#include <BaSyx/opcua/common/QualifiedName.h>
#include <BaSyx/opcua/common/ObjectAttributes.h>
#include <BaSyx/opcua/common/ObjectTypeAttributes.h>

namespace basyx
{
	namespace opcua
	{
		namespace aas
		{
			namespace metamodel
			{
				struct DictionaryEntryFragmentedId
				{
					struct AttrNames
					{
						static constexpr const char BrowseText[] = "DictionaryEntryFragmentedId::FragmentedId";
						static constexpr const char DisplayName[] = "FrangementedIdDictionaryEntryType";
						static constexpr const char Description[] = "DictionaryEntryFragmentedId::FragmentedId";
						static constexpr const char NodeHandle[] = "DictionaryEntryFragmentedId::FragmentedId";
					};

					static basyx::opcua::NodeId getNodeId(int32_t t_ns)
					{
						return basyx::opcua::NodeId::string(t_ns, AttrNames::NodeHandle);
					}

					template<typename CONNECTOR_TYPE>
					static UA_StatusCode define(int32_t t_ns, CONNECTOR_TYPE& t_client);
				};

				template<typename CONNECTOR_TYPE>
				UA_StatusCode DictionaryEntryFragmentedId::define(int32_t t_ns, CONNECTOR_TYPE & t_connector)
				{
					using namespace basyx::opcua;

					Services<CONNECTOR_TYPE> services(t_connector);

					return services.addObjectNode(
						getNodeId(t_ns),
						NodeId::numeric(UA_NS0ID_DICTIONARYENTRYTYPE),
						NodeId::numeric(UA_NS0ID_DICTIONARYENTRYTYPE),
						NodeId::numeric(UA_NS0ID_HASSUBTYPE),
						QualifiedName(t_ns, AttrNames::BrowseText),
						ObjectAttributes(AttrNames::DisplayName, AttrNames::Description, "en-US")
					);
				}
			}
		}
	}
}
#endif
