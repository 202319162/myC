#include<stdio.h>
#include<stdlib.h>
//typedef可以把中间的内容定义为最后一个单词
typedef struct point {
    int x;
    int y;
} point;
//union的数据都会占用同一块内存空间
typedef union CHI{
    int i;
    char ch[sizeof(int)];
} CHI;
int gAll = 12;
//int g2 = gAll;❌全局变量只能用编译时刻已知的值初始化
//全局变量会自动初始化为0或NULL
void f() {
    //静态本地变量具有全局变量生存期，本地变量作用域
    static int f = 1;;
    printf("%d\n", f);
    f += 2;
    printf("%d\n", f);
}
int main(int args, char *argv[]) {
    f();
    f();
    f();
    point p1 = {0, 0};
    point p2 = {1, 1};
    CHI chi;
    chi.i = 1234;
    for (int i = 0; i < sizeof(int); i++) {
        printf("%02hhX\n", chi.ch[i]);
    }
    return 0;
}//
// Created by lg050 on 2026/3/19.
//