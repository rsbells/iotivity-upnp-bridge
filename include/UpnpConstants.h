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

#ifndef UPNP_CONSTANTS_H_
#define UPNP_CONSTANTS_H_

#include <string>

// TODO: The constants in this file are temporary in a sense that every value needs to be spec defined,
// i.e. vetted by OIC and UPNP. Each section needs TBD and expanded.

// Resource type: devices
static const std::string UPNP_OIC_TYPE_DEVICE_LIGHT               = "oic.d.light";
static const std::string UPNP_OIC_TYPE_DEVICE_INET_GATEWAY        = "oic.d.inet.gateway";
static const std::string UPNP_OIC_TYPE_DEVICE_WAN                 = "oic.d.wan";
static const std::string UPNP_OIC_TYPE_DEVICE_WAN_CONNECTION      = "oic.d.wan.connection";
static const std::string UPNP_OIC_TYPE_DEVICE_LAN                 = "oic.d.lan";
static const std::string UPNP_OIC_TYPE_DEVICE_MEDIA_RENDERER      = "oic.d.media.renderer";
static const std::string UPNP_OIC_TYPE_DEVICE_MEDIA_SERVER        = "oic.d.media.server";

// Resource type: services
static const std::string UPNP_OIC_TYPE_BRIGHTNESS                 = "oic.r.light.brightness";
static const std::string UPNP_OIC_TYPE_POWER_SWITCH               = "oic.r.switch.binary";
static const std::string UPNP_OIC_TYPE_CONNECTION_MANAGER         = "oic.r.connection.manager";
static const std::string UPNP_OIC_TYPE_AV_TRANSPORT               = "oic.r.av.transport";
static const std::string UPNP_OIC_TYPE_CONTENT_DIRECTORY          = "oic.r.content.directory";
static const std::string UPNP_OIC_TYPE_RENDERING_CONTROL          = "oic.r.rendering.control";
static const std::string UPNP_OIC_TYPE_SCHEDULED_RECORDING        = "oic.r.scheduled.recording";
static const std::string UPNP_OIC_TYPE_WAN_IF_CONFIG              = "oic.r.wan.interface.config";
static const std::string UPNP_OIC_TYPE_LAYER3_FORWARDING          = "oic.r.l3f";
static const std::string UPNP_OIC_TYPE_DEVICE_PROTECTION          = "oic.r.device.protection";
static const std::string UPNP_OIC_TYPE_WAN_CABLE_LINK_CONFIG      = "oic.r.wan.cable";
static const std::string UPNP_OIC_TYPE_WAN_DSL_LINK_CONFIG        = "oic.r.wan.dsl";
static const std::string UPNP_OIC_TYPE_WAN_ETHERNET_CONFIG        = "oic.r.wan.ethernet";
static const std::string UPNP_OIC_TYPE_WAN_POTS_LINK_CONFIG       = "oic.r.wan.pots";
static const std::string UPNP_OIC_TYPE_WAN_IP_CONNECTION          = "oic.r.wan.ip";
static const std::string UPNP_OIC_TYPE_WAN_PPP_CONNECTION         = "oic.r.wan.ppp";
static const std::string UPNP_OIC_TYPE_LAN_HOST_CONFIG            = "oic.r.lan.config";

// URI prefix (URI = URI_PREFIX + UDN)
static const std::string UPNP_OIC_URI_PREFIX_LIGHT                  = "/oic/upnp/light/";
static const std::string UPNP_OIC_IRI_PREFIX_BRIGHTNESS             = "/oic/upnp/brightness/";
static const std::string UPNP_OIC_URI_PREFIX_POWER_SWITCH           = "/oic/upnp/switch/";
static const std::string UPNP_OIC_URI_PREFIX_INET_GATEWAY           = "/oic/upnp/igd/";
static const std::string UPNP_OIC_URI_PREFIX_LAYER3_FORWARDING      = "/oic/upnp/l3f/";
static const std::string UPNP_OIC_URI_PREFIX_DEVICE_PROTECTION      = "/oic/upnp/device-protection/";
static const std::string UPNP_OIC_URI_PREFIX_WAN                    = "/oic/upnp/wan/";
static const std::string UPNP_OIC_URI_PREFIX_WAN_IF_CONFIG          = "/oic/upnp/wan/ifconfig/";
static const std::string UPNP_OIC_URI_PREFIX_WAN_CABLE_LINK_CONFIG  = "/oic/upnp/wan/cableconfig";
static const std::string UPNP_OIC_URI_PREFIX_WAN_DSL_LINK_CONFIG    = "/oic/upnp/wan/dslconfig";
static const std::string UPNP_OIC_URI_PREFIX_WAN_ETHERNET_CONFIG    = "/oic/upnp/wan/ethernetconfig";
static const std::string UPNP_OIC_URI_PREFIX_WAN_POTS_LINK_CONFIG   = "/oic/upnp/wan/potsconfig";
static const std::string UPNP_OIC_URI_PREFIX_WAN_CONNECTION         = "/oic/upnp/wan/connection";
static const std::string UPNP_OIC_URI_PREFIX_WAN_IP_CONNECTION      = "/oic/upnp/wan/ip";
static const std::string UPNP_OIC_URI_PREFIX_WAN_PPP_CONNECTION     = "/oic/upnp/wan/ppp";
static const std::string UPNP_OIC_URI_PREFIX_LAN                    = "/oic/upnp/lan";
static const std::string UPNP_OIC_URI_PREFIX_LAN_HOST_CONFIG        = "/oic/upnp/lan/hostconfig";
static const std::string UPNP_OIC_URI_PREFIX_MEDIA_RENDERER         = "/oic/upnp/media/renderer/";
static const std::string UPNP_OIC_URI_PREFIX_MEDIA_SERVER           = "/oic/upnp/media/server/";
static const std::string UPNP_OIC_URI_PREFIX_CONNECTION_MANAGER     = "/oic/upnp/connection-manager/";
static const std::string UPNP_OIC_URI_PREFIX_AV_TRANSPORT           = "/oic/upnp/av-transport/";
static const std::string UPNP_OIC_URI_PREFIX_CONTENT_DIRECTORY      = "/oic/upnp/content-directory/";
static const std::string UPNP_OIC_URI_PREFIX_RENDERING_CONTROL      = "/oic/upnp/rendering-control/";
static const std::string UPNP_OIC_URI_PREFIX_SCHEDULED_RECORDING    = "/oic/upnp/scheduled-recording/";

// AV transport service, and Rendering control service query params
static const std::string UPNP_OIC_QUERY_PARAM_INSTANCE_ID = "iid";
static const std::string UPNP_OIC_QUERY_PARAM_CHANNEL = "c";
// Connection manager service query params
static const std::string UPNP_OIC_QUERY_PARAM_CONNECTION_ID = "cid";
// Content directory service query params
static const std::string UPNP_OIC_QUERY_PARAM_OBJECT_ID = "oid";
static const std::string UPNP_OIC_QUERY_PARAM_BROWSE_FLAG = "bf";
static const std::string UPNP_OIC_QUERY_PARAM_FILTER = "f";
static const std::string UPNP_OIC_QUERY_PARAM_START_INDEX = "si";
static const std::string UPNP_OIC_QUERY_PARAM_REQUESTED_COUNT = "rc";
static const std::string UPNP_OIC_QUERY_PARAM_SORT_CRITERIA = "soc";
static const std::string UPNP_OIC_SEARCH_QUERY_PARAM_CONTAINER_ID = "cid";
static const std::string UPNP_OIC_SEARCH_QUERY_PARAM_SEARCH_CRITERIA = "sec";
static const std::string UPNP_OIC_SEARCH_QUERY_PARAM_FILTER = "sf";
static const std::string UPNP_OIC_SEARCH_QUERY_PARAM_START_INDEX = "ssi";
static const std::string UPNP_OIC_SEARCH_QUERY_PARAM_REQUESTED_COUNT = "src";
static const std::string UPNP_OIC_SEARCH_QUERY_PARAM_SORT_CRITERIA = "ssc";
// Device Protection service query params
static const std::string UPNP_OIC_QUERY_PARAM_MESSAGE = "m";
static const std::string UPNP_OIC_QUERY_PARAM_PROTOCOL = "p";

#endif
