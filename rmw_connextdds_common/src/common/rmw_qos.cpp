// Copyright 2020 Real-Time Innovations, Inc. (RTI)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "rmw_connextdds/rmw_impl.hpp"

/******************************************************************************
 * QoS Profile functions
 ******************************************************************************/
#if RMW_CONNEXT_HAVE_QOS_PROFILE_API
rmw_ret_t
rmw_api_connextdds_qos_profile_check_compatible(
  const rmw_qos_profile_t publisher_profile,
  const rmw_qos_profile_t subscription_profile,
  rmw_qos_compatibility_type_t * compatibility,
  char * reason,
  size_t reason_size)
{
  return rmw_dds_common::qos_profile_check_compatible(
    publisher_profile, subscription_profile, compatibility, reason, reason_size);
}
#endif /* RMW_CONNEXT_HAVE_QOS_PROFILE_API */
