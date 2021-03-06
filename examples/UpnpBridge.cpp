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

#include <iostream>

#include <RCSResourceContainer.h>

using namespace std;
using namespace OIC::Service;

int main()
{
    RCSResourceContainer *container = RCSResourceContainer::getInstance();
    container->startContainer("./BundleConfig.xml");
    container->startBundle("oic.bundle.upnp");
    std::list<string> resources =
        container->listBundleResources("oic.bundle.upnp");
    std::list<string>::iterator resourceIt;
    cout << "List of bridged resources:" << endl;
    for (resourceIt = resources.begin(); resourceIt != resources.end();
         resourceIt++)
    {
        cout << "\tresource uri: " << (*resourceIt).c_str() << endl;
    }
    cout << "Enter 'q' to stop the container" << endl;

    while (getchar() != 'q');

    container->stopBundle("oic.bundle.upnp");
    container->removeBundle("oic.bundle.upnp");
    container->stopContainer();

    return 0;
}
