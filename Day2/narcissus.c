#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int begin = 1;
    for (int i = 1; i < N; ++i) {
        begin *= 10;
    }
    int end = begin * 10 - 1;

    for (int i = 153; i <= end; i++) {
        int sum = 0;
        int len = N;
        int tempbegin = begin;
        int tempi = i;
        while (len) {
            sum += (tempi / tempbegin) * (tempi / tempbegin) * (tempi / tempbegin);
            len--;
            tempi %= tempbegin;
            tempbegin /= 10;
        }
        if ( i == sum) {
            printf("%d\n", i);
        }
    }
    return 0;
}