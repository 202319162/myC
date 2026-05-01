#include <stdio.h>
#include <stdlib.h>
int main(void) {
    void *p;
    int cnt = 0;
    while (p = malloc(100 * 1024 * 1024)) {
        cnt ++;
    }
    printf("∑÷≈‰¡À%d00MBø’º‰\n", cnt);
    return 0;
}//
// Created by lg050 on 2026/3/10.
//