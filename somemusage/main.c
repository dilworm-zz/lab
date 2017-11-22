#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "testso.h"

int main() {
    void*p = NULL;
    char c=0;
    do {
        printf("enther size:\n");
        c = getchar();
        if (c == '0') {
            if (p) { freemem(p); p = NULL;}
        } else {
            if (p) { freemem(p); }
            p = allocmem(1024*1024*100*atoi(&c));
            memset(p, 2, 1024*1024*100*atoi(&c));
        }
    } while (c != 'e');
}
