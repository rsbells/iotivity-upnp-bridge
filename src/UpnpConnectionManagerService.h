//******************************************************************
//
// Copyright 2016 Intel Corporation All Rights Reserved.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=

#ifndef UPNP_CONNECTION_MANAGER_SERVICE_H_
#define UPNP_CONNECTION_MANAGER_SERVICE_H_

#include <string>
#include <map>

#include <gupnp.h>

#include "UpnpResource.h"
#include "UpnpInternal.h"
#include "UpnpService.h"

using namespace std;

class UpnpConnectionManager: public UpnpService
{
    friend class UpnpService;

public:
    typedef GUPnPServiceProxyAction* (UpnpConnectionManager::*GetAttributeHandler)(UpnpRequest*);
    typedef GUPnPServiceProxyAction* (UpnpConnectionManager::*SetAttributeHandler)(RCSResourceAttributes::Value&, UpnpRequest*);

    UpnpConnectionManager(GUPnPServiceInfo *serviceInfo,
                    UpnpRequestState *requestState):
        UpnpService(serviceInfo, UPNP_OIC_TYPE_CONNECTION_MANAGER, requestState,
                    nullptr) // TODO change to Reference to Attribute table
    {
    }

    // TODO Implement various OCF attributes/UPnP Actions

private:
    static map <const string, pair <GetAttributeHandler, SetAttributeHandler>> AttributeMap;

    bool getAttributesRequest(UpnpRequest *request);
    bool setAttributesRequest(const RCSResourceAttributes& attrs, UpnpRequest *request);

};

#endif