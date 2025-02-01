#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h"

int LLVMFuzzerTestOneInput(const unsigned char *data, size_t size)
{
    cJSON *json_string = cJSON_CreateString((char *)data);
    if (json_string)
    {
        cJSON_Delete(json_string);
    }
    return 0;
}
