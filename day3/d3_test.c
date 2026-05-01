#include<stdio.h>
int main() {
    int input;
    int arr[10];
    int i;
    for (i = 0; i < 10; i++) {
        arr[i] = 0;
    }
    while (true) {
        scanf("%d", &input);
        if (input == -1) {
            break;
        }
        else {
            arr[input]++;
        }
    }
    for (i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}//
// Created by lg050 on 2026/1/20.
//