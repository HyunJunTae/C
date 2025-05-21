#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {

    int a = x;
    int h_num = 0;
    bool answer = true;

    while (true) {
        h_num = h_num + (x % 10);
        x = x - (x % 10);
        if (x == 0) {
            break;
        }
        x = x / 10;
    }

    if ((a % h_num) == 0) {
        answer = true;
    }
    else {
        answer = false;
    }
    
    return answer;
}




// 재귀함수를 이용.
int sum(int x) {
    if(x<10) return x%10;   
    else return x%10 + sum(x/10); 
}
bool solution1(int x) {
    return (x%sum(x) == 0);
}


int main(void) {

    int x = 12;

    printf("%d\n", x == 13); // true면 1. false면 0.
    printf("%s\n", x == x ? "true" : "false");
    printf("%s\n", x == 99999999 ? "true" : "false"); // ? 조건연산자를 이용해 true false 출력 가능. 참이면 왼쪽, 거짓이면 오른쪽 출력.
    printf("%s\n", solution(x) ? "true" : "false");

    return 0;
}