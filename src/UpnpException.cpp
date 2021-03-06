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
#include "UpnpException.h"

UpnpException::UpnpException(UpnpErrorCode errorCode, const std::string &msg)
    : m_errorCode(errorCode), m_msg(msg) {}

const char *UpnpException::what() const noexcept
{
    return m_msg.c_str();
}

UpnpErrorCode UpnpException::code() const
{
    return m_errorCode;
}

NotImplementedException::NotImplementedException(const std::string &msg)
    : UpnpException(UPNP_ERROR_NOT_IMPLEMENTED, msg) {}

BadUriException::BadUriException(const std::string &msg)
    : UpnpException(UPNP_ERROR_BAD_URI, msg) {}
