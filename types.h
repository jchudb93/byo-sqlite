#include <unistd.h>
#ifndef STRUCTS
typedef struct
{
    char *buffer;
    size_t buffer_length;
    ssize_t input_length;
} InputBuffer;

#endif