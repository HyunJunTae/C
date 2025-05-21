#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
    // 리턴할 값은 메모리를 동적 할당해주세요
    char* answer = (char*)malloc(4 * sizeof(char));

    char* a = "Even";
    char* b = "Odd";

    if (num%2==0) {
         for(int i=0;i<4;i++) {
            answer[i] = a[i];
         }
    }
    else {
        for(int i=0;i<3;i++) {
            answer[i] = b[i];
            }
    }
    return answer;
}


char* solution1(int num) {
    char* answer = (char*)malloc(10 * sizeof(char));

    if (num%2==0) {
        answer = "Even";
    }
    else {
        answer = "Odd";
    }

    return answer;
    }

// char* solution2(int num) {
//     char* answer = (char*)malloc(10 * sizeof(char));

//     num%2==0 ? answer = "Even" : answer = "Odd";
// }

char* solution3(int num) {
    return num%2==0 ? "Even":"Odd";
}


int main(void) {

    int num = 7;

    printf("num = %d\n", num);
    printf("%s\n", solution1(num));

    return 0;
}