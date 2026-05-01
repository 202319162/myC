#include<stdio.h>
#define aa 3
//宏的定义中出现另一个宏同样会替换
#define aa2 aa * 2 //注释不会影响宏定义
//可以定义没有值的宏
#define _DEBUG
//定义下一行之前要加'\'
#define PRF printf("%d\n", aa);\
    printf("%d\n", aa2)
//宏定义可以有参数
#define square(x) x * x
//参数定义全部要加括号：整体和任何有参数的地方
#define compare(a,  b) ((a) > (b) ? (a) : (b))
int *f() {
    int val = 10;
    return &val;
}
void temp() {
    int a = 8888;
    int b = 9999;
}
int main(int argc ,char const*argv[]) {
    PRF;
    printf("%d\n", sizeof(aa));
    printf("%s : %d\n", __FILE__, __LINE__);
    printf("%s : %s\n", __DATE__, __TIME__);
    printf("%d", square(5));
    int *p = f();
    temp();
    printf("%d\n", *p);
    return 0;
}//
// Created by lg050 on 2026/3/21.
//