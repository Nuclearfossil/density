/*
 * Centaurean Density
 *
 * Copyright (c) 2018, Guillaume Voirin
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     1. Redistributions of source code must retain the above copyright notice, this
 *        list of conditions and the following disclaimer.
 *
 *     2. Redistributions in binary form must reproduce the above copyright notice,
 *        this list of conditions and the following disclaimer in the documentation
 *        and/or other materials provided with the distribution.
 *
 *     3. Neither the name of the copyright holder nor the names of its
 *        contributors may be used to endorse or promote products derived from
 *        this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * 13/01/18 17:31
 */

#include "dictionaries.h"

DENSITY_WINDOWS_EXPORT DENSITY_FORCE_INLINE density_dictionary* density_create_dictionary(DENSITY_ALGORITHM algorithm, void *(*mem_alloc)(size_t)) {
    if(mem_alloc == NULL)
        mem_alloc = malloc;
    density_dictionary* out = mem_alloc(sizeof(density_dictionary));
    out->algorithm = algorithm;
    switch(algorithm) {
        case DENSITY_ALGORITHM_CHAMELEON:
            out->size = sizeof(density_chameleon_dictionary);
            out->pointer = mem_alloc(out->size);
            break;
        default:
            return NULL;
    }
}


DENSITY_WINDOWS_EXPORT DENSITY_FORCE_INLINE density_dictionary* density_delete_dictionary(void (*mem_free)(void *)) {

}


DENSITY_WINDOWS_EXPORT DENSITY_FORCE_INLINE void density_reset_dictionary(density_dictionary* dictionary) {

}
