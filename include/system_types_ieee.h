/*
<:copyright-BRCM:2016-2019:Apache:standard

 Copyright (c) 2016-2019 Broadcom. All Rights Reserved

 The term “Broadcom” refers to Broadcom Inc. and/or its subsidiaries

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.

 *  :>
 */

/* system_types_ieee.h: platform agnostic data types for the IEEE stack */

#ifndef SYSTEM_TYPES_IEEE_H_
#define SYSTEM_TYPES_IEEE_H_

#include <bcmos_system.h>

typedef uint32_t mpcp_timestamp;

typedef uint32_t bandwidth_tqps;

#define LINE_RATE_1G_KBPS 1000000
#define LINE_RATE_10G_KBPS 10000000
#define LINE_RATE_25G_KBPS 25000000

#define RPT_LEN_1G_NO_FEC_TQ    42
#define RPT_LEN_1G_FEC_TQ       58
#define RPT_LEN_10G_TQ          5
#define RPT_LEN_25G_TQ          2

#define NS_PER_TQ 16

#define BITS_PER_SP 257
#define BIT_RATE_25G 25.78125
#define NS_TO_SP(ns) (((ns) * BIT_RATE_25G) / BITS_PER_SP)

#endif /* SYSTEM_TYPES_IEEE_H_ */
