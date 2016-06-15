/**
 *  Copyright 2014-2016 CyberVision, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

# ifndef KAA_DEFAULTS_H_
# define KAA_DEFAULTS_H_

/**
 *
 * DO NOT EDIT THIS FILE. IT IS AUTO-GENERATED.
 *
 */

# include "kaa_common.h"

# ifdef __cplusplus
extern "C" {
# endif

# define KAA_BUILD_VERSION             "0.8.0"
# define KAA_BUILD_COMMIT_HASH         ""

# define KAA_SDK_TOKEN                 "1Rzo_Mos1EmCacrpg5lJGLx8U0k"

# define KAA_PROFILE_SCHEMA_VERSION    1

# define DEFAULT_USER_VERIFIER_TOKEN    "41003743756435369194"

# define KAA_SYNC_TIMEOUT               60000L


/**
 * @brief Uses to represent transport-specific connection data to establish
 * connection to Bootstrap servers.
 *
 * @see kaa_transport_protocol_id_t
 * @see kaa_access_point_t
 */
typedef struct {
    kaa_transport_protocol_id_t    protocol_id;
    kaa_access_point_t             access_point;
} kaa_bootstrap_server_connection_data_t;

# define KAA_BOOTSTRAP_ACCESS_POINT_COUNT    2

static const kaa_bootstrap_server_connection_data_t KAA_BOOTSTRAP_ACCESS_POINTS[KAA_BOOTSTRAP_ACCESS_POINT_COUNT] =
{
    {
        { 0x56c8ff92, 1 },
        {
            0x929a2016,
            318,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -94 , -45 , -128 , -91 , -48 , 73 , 40 , 84 , -15 , -60 , 54 , 89 , 19 , -108 , 21 , 113 , 71 , -28 , 52 , 89 , 70 , 125 , -76 , -7 , -117 , -26 , -112 , 21 , 2 , 98 , -36 , -106 , 92 , -67 , -112 , 127 , 119 , -100 , -94 , 2 , 19 , 7 , -95 , 119 , -72 , 63 , 76 , 34 , -110 , -12 , 87 , -49 , 28 , 37 , 68 , 21 , -108 , 108 , -28 , -40 , 47 , -21 , -127 , -5 , -83 , -66 , 23 , -105 , 32 , 30 , 120 , 68 , 94 , 94 , 80 , -77 , -25 , 12 , 40 , 16 , -64 , 55 , 72 , 33 , -96 , -125 , -99 , 98 , -86 , -44 , 82 , 46 , -13 , 31 , -118 , -19 , 80 , -49 , 66 , -70 , -21 , -13 , 40 , 125 , -92 , -42 , 4 , -120 , 63 , -67 , -78 , -3 , -58 , 14 , 79 , 59 , -70 , -105 , 100 , 123 , -15 , -116 , -21 , 68 , -50 , 60 , -14 , -92 , -33 , 127 , -108 , -9 , -1 , -116 , -28 , 24 , -34 , 6 , -84 , 23 , 55 , 93 , 47 , 24 , 80 , -34 , -37 , -8 , -1 , -6 , 22 , 91 , 9 , -58 , 71 , 56 , 67 , -10 , -100 , -6 , -15 , -111 , 83 , 16 , -20 , -117 , -14 , -111 , 21 , 103 , 98 , -111 , 122 , -79 , 65 , -61 , -45 , 12 , 78 , -74 , 108 , 80 , -81 , 77 , 100 , -106 , -92 , 7 , -103 , -42 , -111 , 53 , -72 , -15 , -22 , -3 , 63 , -85 , 82 , 98 , -78 , 106 , -113 , 110 , -105 , -27 , 93 , 117 , 97 , 119 , -102 , 58 , -76 , -78 , 44 , 72 , 3 , 39 , -52 , 34 , 24 , -34 , 108 , -14 , -114 , -3 , 21 , -66 , 57 , 115 , -47 , 110 , -128 , -76 , -3 , 60 , -126 , -44 , -119 , -100 , -19 , -64 , -30 , -52 , -26 , 3 , -62 , 37 , -84 , 87 , -118 , -116 , 68 , 38 , 15 , 53 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 12 , 53 , 50 , 46 , 51 , 52 , 46 , 53 , 51 , 46 , 49 , 55 , 50 , 0 , 0 , 38 , -96             }
        }
    },
    {
        { 0xfb9a3cf0, 1 },
        {
            0x929a2016,
            318,
            (char []) {
            0 , 0 , 1 , 38 , 48 , -126 , 1 , 34 , 48 , 13 , 6 , 9 , 42 , -122 , 72 , -122 , -9 , 13 , 1 , 1 , 1 , 5 , 0 , 3 , -126 , 1 , 15 , 0 , 48 , -126 , 1 , 10 , 2 , -126 , 1 , 1 , 0 , -94 , -45 , -128 , -91 , -48 , 73 , 40 , 84 , -15 , -60 , 54 , 89 , 19 , -108 , 21 , 113 , 71 , -28 , 52 , 89 , 70 , 125 , -76 , -7 , -117 , -26 , -112 , 21 , 2 , 98 , -36 , -106 , 92 , -67 , -112 , 127 , 119 , -100 , -94 , 2 , 19 , 7 , -95 , 119 , -72 , 63 , 76 , 34 , -110 , -12 , 87 , -49 , 28 , 37 , 68 , 21 , -108 , 108 , -28 , -40 , 47 , -21 , -127 , -5 , -83 , -66 , 23 , -105 , 32 , 30 , 120 , 68 , 94 , 94 , 80 , -77 , -25 , 12 , 40 , 16 , -64 , 55 , 72 , 33 , -96 , -125 , -99 , 98 , -86 , -44 , 82 , 46 , -13 , 31 , -118 , -19 , 80 , -49 , 66 , -70 , -21 , -13 , 40 , 125 , -92 , -42 , 4 , -120 , 63 , -67 , -78 , -3 , -58 , 14 , 79 , 59 , -70 , -105 , 100 , 123 , -15 , -116 , -21 , 68 , -50 , 60 , -14 , -92 , -33 , 127 , -108 , -9 , -1 , -116 , -28 , 24 , -34 , 6 , -84 , 23 , 55 , 93 , 47 , 24 , 80 , -34 , -37 , -8 , -1 , -6 , 22 , 91 , 9 , -58 , 71 , 56 , 67 , -10 , -100 , -6 , -15 , -111 , 83 , 16 , -20 , -117 , -14 , -111 , 21 , 103 , 98 , -111 , 122 , -79 , 65 , -61 , -45 , 12 , 78 , -74 , 108 , 80 , -81 , 77 , 100 , -106 , -92 , 7 , -103 , -42 , -111 , 53 , -72 , -15 , -22 , -3 , 63 , -85 , 82 , 98 , -78 , 106 , -113 , 110 , -105 , -27 , 93 , 117 , 97 , 119 , -102 , 58 , -76 , -78 , 44 , 72 , 3 , 39 , -52 , 34 , 24 , -34 , 108 , -14 , -114 , -3 , 21 , -66 , 57 , 115 , -47 , 110 , -128 , -76 , -3 , 60 , -126 , -44 , -119 , -100 , -19 , -64 , -30 , -52 , -26 , 3 , -62 , 37 , -84 , 87 , -118 , -116 , 68 , 38 , 15 , 53 , 2 , 3 , 1 , 0 , 1 , 0 , 0 , 0 , 12 , 53 , 50 , 46 , 51 , 52 , 46 , 53 , 51 , 46 , 49 , 55 , 50 , 0 , 0 , 38 , -95             }
        }
    }};



# define KAA_CONFIGURATION_DATA_LENGTH    17

static const char KAA_CONFIGURATION_DATA[KAA_CONFIGURATION_DATA_LENGTH] =
{
0 , -93 , -95 , 28 , 65 , -8 , 102 , 75 , -39 , -66 , -94 , -66 , 84 , -32 , 37 , -84 , 52 };

# ifdef __cplusplus
} // extern "C"
# endif

# endif /* KAA_DEFAULTS_H_ */

