/*

Copyright (c) 2012, Arvid Norberg
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions
are met:

    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the distribution.
    * Neither the name of the author nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
POSSIBILITY OF SUCH DAMAGE.

*/


#ifndef TORRENT_JSON_UTIL_HPP_
#define TORRENT_JSON_UTIL_HPP_

#include <cstdint>

extern "C" {
#include "jsmn.h"
}

#include <boost/cstdint.hpp>

namespace ip2 {

jsmntok_t* skip_item(jsmntok_t* i);
jsmntok_t* find_key(jsmntok_t* tokens, char* buf, char const* key, int type);
jsmntok_t* find_key_in_array(jsmntok_t* tokens, char* buf, char const* key, int s, int num_keys, int type);
char const* find_string(jsmntok_t* tokens, char* buf, char const* key, bool* found = NULL);
std::int64_t find_int(jsmntok_t* tokens, char* buf, char const* key, bool* found = NULL);
bool find_bool(jsmntok_t* tokens, char* buf, char const* key);

}

#endif

