#include<stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int len = 1;
    while (true) {
        if (num / len == 0) {
            len /= 10;
            break;
        }
        else {
            len *= 10;
        }
    }
    while (true) {
        if (len == 0) {
            break;
        }
        else {
            printf("%d ", num / len);
            num %= len;
            len /= 10;
        }
    }
    return 0;
}