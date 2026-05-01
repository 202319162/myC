#include<stdio.h>
//include”“会先到自己的目录找，没有再去系统指定目录，<>则会直接到指定目录
#include"max.h"
//static 的作用总结为两句话：在内部延续生命，在外部隔离视线。
//int max(int a, int b);
int main(int argc, char const *argv[]) {
    int a = 5;
    int b = 6;
    printf("%d\n", max(a, b));
    return 0;
}
double max(double a, double b) {
    return a > b ? a : b;
}//
// Created by lg050 on 2026/3/21.
//