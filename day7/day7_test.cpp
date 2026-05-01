#include<stdio.h>
#include<stdlib.h>
//声明结构体模板
struct point {
        int x;
        int y;
    };
//结构体作为函数参数被传入函数时函数复制了一个相同的结构变量，所以地址不同
void display(struct point p) {
    printf("the address of point in function is %p\n", &p);
}
int main(int argc, char *argv[]) {

    struct point p;
    //给结构变量赋值方法
    p = (struct point) {0, 1};
    point p1 = p;
    //结构变量名字不是地址，取地址必须用&
    point *pointer = &p;
    printf("the address of p is %p\n", pointer);
    display(p);
    printf("the x of the p1point is: %d\n", p1.x);
    printf("the y of the p1point is: %d\n", p1.y);
    return 0;
}//
// Created by lg050 on 2026/3/18.
//