#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>



// char* solution(int n) {

//     char* su = "수";
//     char* bak = "박";
//     int len = strlen(su);
//     char* answer = (char*)malloc(n * sizeof(char));
//     for (int i=0; i<n; i++) {
//         answer[i*len] = i%2==0 ? su : bak;
//     }

//     return answer;
// }


char* solution1(int n) {
    char *add1 = "수";
    char *add2 = "박";
    int len = strlen(add1);
    char *answer = (char*)malloc(n*len);
    for(int i=0; i<n; i++) {
        strcpy(&answer[i*len], i%2==0 ? add1 : add2);
    }

    return answer;
}


int main(void) {

    int n;
    printf("n : ");
    scanf("%d", &n);

    char* s;
    s = solution(n);
    printf("%s", s);

    return 0;
}