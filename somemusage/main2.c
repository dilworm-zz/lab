#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "testso.h"

int main(int argc, char*argv[]) {
    
    size_t size = 100;
    if (argc > 1) {
        size = atoi(argv[1]);
    }

    void* p = allocmem(size);
    if (!p) {
        printf("malloc falied");
        return 0;
    }

    memset(p, 1, size + 1);
    printf("type to exit.");
    char c = getchar();
    return 1;
}
