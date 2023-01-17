#include <stdio.h>



int main(void) {

    int n;
    char k;
    scanf("%c", &k);
    printf("%c ", k+2);

    printf("\n");
    
    for (int i=0; i<3; i++) {
        scanf("%c", &k);
        printf("%c ", k);
    }

    printf("\n");

    while(1) {
        scanf("%c", &k);
        if (k == '\n') {
            break;
        }
        printf("%c ", k);
    }

    return 0;
}

// 문자는 for문 안에서 반복 입력이 안된다???
// 뒤에 while문으로 하나 더 붙여보니까 입력버퍼에 남아있던 애들 나옴.