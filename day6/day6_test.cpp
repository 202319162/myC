#include<stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
    // 字符串三种写法
    //  char words[10] = "Hello1234";//字符串的末尾自动加0，长度加1
    //  char* p = words;
    //  char wordscopy[] = "123";
    //  for (int i = 0; i < strlen(words); i++) {
    //      printf("%c", words[i] );
    //  }
    //  printf("\n");
    //  printf("123\
    //  456\n");
    //  printf("123" "456");
    //
    // char words[8] = "";
    // printf("%c", words[2]);

    // char* arr[] = { "0", "January", "February", "March", "April", "May", "June", "July", "August", "Sepetember", "October", "November", "December"};
    // int month = 0;
    // scanf ("%d", &month);
    // printf("%s", arr[month]);
    // char word = 0;
    // scanf("%c", word);
    // printf("%d", putchar((int)word));
    int ch = 0;
    while ((ch = getchar()) != EOF) {
        printf("%d", putchar(ch));
    }
    return 0;

}//
// Created by lg050 on 2026/3/17.

//指针构造的字符串或字符数组等任何事物会放在只读数据段中，不能被修改，且如果两个字符串一致，他们会指向同一个地址，
//而char[]构造的字符串是一个字符数组，是本地变量，放在栈中，可以被修改，且如果其和之前指针构造的字符串内容一致，指针构造的字符串会把内容拷贝给它
//构造字符串-> 数组
//处理字符串->指针
