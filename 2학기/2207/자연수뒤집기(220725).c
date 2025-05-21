#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(long long n) {

    // n이 몇 자리 수인지 구하기.
    long long a = n;
    int count = 0;
    while (a != 0) {
        a /= 10;
        count += 1;
    }

    // 배열 선언.
    int* answer = (int*)malloc(count * sizeof(int));

    // 배열에 하나씩 넣기.
    for (int i=0; i<count; i++) {
        answer[i] = n % 10;
        n /= 10;
    }

    return answer;
}


int main(void) {

    long long n = 12345;

    printf("%s", solution(n));
    // 가설 : %s는 문자열에만 된다?

    return 0;
}