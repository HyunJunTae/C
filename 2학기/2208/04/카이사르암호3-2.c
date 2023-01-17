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

    // 키 선언, 입력
    int key;
    printf("Key : ");
    scanf("%d", &key);

    // 알파벳들 선언.
    int length = 1;
    char* alphabets;
    alphabets = (char*)malloc(length * sizeof(char));

    // 알파벳 하나하나 입력받기.
    char alpha;
    printf("alphabets : ");
    while(true) {
        scanf("%c", &alpha);
        if (alpha == '\n') {
            break;
        }
        alphabets[length-1] = alpha;
        length += 1;
        realloc(alphabets, length * sizeof(char));
    }

    //카이사르 알고리즘으로 변환시키고 출력.
    for (int i=0; i<length; i++) {
        caesar(&alphabets[i], key);
    }
    printf("%s", alphabets);
    
    free(alphabets);
    return 0;
}