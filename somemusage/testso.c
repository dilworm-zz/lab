#include "testso.h"

void* allocmem(size_t size) {
    printf("allocate size = %ld\n", size);
    return malloc(size);
}

void freemem(void* p) {
    free(p);
    printf("free\n");
}
    

