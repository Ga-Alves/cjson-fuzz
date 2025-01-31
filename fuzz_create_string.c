#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h"

int LLVMFuzzerTestOneInput(const unsigned char *data, size_t size) {
    cJSON_CreateString(data);
}
