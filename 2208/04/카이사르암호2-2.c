#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void caesar(char* alphabet, int key) {

    if (*alphabet+key >= 65 && *alphabet+key <= 90) {
        *alphabet = *alphabet + key;
        return;
    }
    if (*alphabet+key < 65) {
        *alphabet = *alphabet + 26 + key;
        return;
    }
    if (*alphabet+key > 90) {
        *alphabet = *alphabet - 26 + key;
        return;
    }
    
}



int main(void) {


    // 키 입력
    int key;
    printf("Key : ");
    scanf("%d", &key);

    // 알파벳 입력
    char* alphabets;
    printf("Alphabets : ");
    scanf("%s", alphabets);

    // 카이사르 알고리즘에 따라 변환하고 출력. 만약 \n이면 반복문 종료.
    int i = 0;
    while (1){
        if (alphabets[i] == '\n') {
            break;
        }
    caesar(&alphabets[i], key);
    printf("%c", alphabets[i]);
    i = i + 1; // 이 부분이 문제
    // i++; // 이거도 안됨.
    }

    // 이건 왜 안되지. i랑 관련이 있는거같은데.
    // for(int i=0; i<strlen(alphabets); i++) {
    //     printf("%c", alphabets[i]);
    // }

    return 0;
}