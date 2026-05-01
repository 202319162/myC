#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int mylen(char *s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}
int mycompare(char *s1, char *s2) {
    int len;
    //数组写法
    while (s1[len] == s2[len] && s1[len] != '\0') {
        len++;
    }
    return s1[len] - s2[len];
    //指针写法
    while (*s1 == *s2 && *s1 != '\0') {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
char *mycpy(char *des, const char *src) {
    char *p = des;
    while (*des++ = *src++) ;
    *des = '\0';
    return p;
}
int main(int argc, char const *argv[]) {
    //定义比较数组
    char s[] = "HelloWorl d";
    char s1[] = "HelloWorld";
    //字符串长度
    printf("%d\n", mylen(s));
    //字符串比较
    printf("%d\n", mycompare(s, s1));
    //字符串拷贝,注意在原函数中用一个指针·保存初始值
    char *s2 = (char*)malloc(strlen(s) + 1);
    printf("%s\n", mycpy(s2, s));
    free(s2);
    //在字符串中寻找字符，返回字符指针
    //从左向右
    char *p = strchr(s, 'l');
    printf("%s\n", p);
    //小技巧：找到第一个后找第二个
    printf("%s\n", strchr(p + 1, 'l'));
    //从右向左
    printf("%s\n", strrchr(s, 'l'));
    //在字符串中寻找字符串
    char *p1 = strstr(s, "lo");
    printf("%s\n", p1);
    return 0;
}//
// Created by lg050 on 2026/3/17.
//