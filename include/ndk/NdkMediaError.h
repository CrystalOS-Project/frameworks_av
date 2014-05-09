/*
 * Copyright (C) 2014 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


/*
 * This file defines an NDK API.
 * Do not remove methods.
 * Do not change method signatures.
 * Do not change the value of constants.
 * Do not change the size of any of the classes defined in here.
 * Do not reference types that are not part of the NDK.
 * Do not #include files that aren't part of the NDK.
 */

#ifndef _NDK_MEDIA_ERROR_H
#define _NDK_MEDIA_ERROR_H

#ifdef __cplusplus
extern "C" {
#endif

enum {
    AMEDIAERROR_BASE = -10000,

    AMEDIAERROR_GENERIC     = AMEDIAERROR_BASE,
    AMEDIAERROR_MALFORMED   = AMEDIAERROR_BASE - 1,
    AMEDIAERROR_UNSUPPORTED = AMEDIAERROR_BASE - 2
};


#ifdef __cplusplus
} // extern "C"
#endif

#endif // _NDK_MEDIA_ERROR_H
