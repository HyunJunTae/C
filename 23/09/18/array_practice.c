#include <stdio.h>


int main(void) {

    int scores[10] = {1, 2, 3, 4, 5};

    int i;
    for (i=0; i<20; i++) {
        printf("scores[%d] : %d\n", i, scores[i]);
    }



    printf("---------------------\n");


    printf("%d\n", *scores);
    printf("%d\n", *scores+1);

    // scores[i] = 100 이런식으로 바꾸는게 아니라, 포인터 이용해서 주소 찝어서 값 바꾸기.
    *scores = 100;
    *(scores+1) = 200;
    for (i=0; i<5; i++) {
        printf("scores[%d] : %d\n", i, scores[i]);
    }

    // 포인터함수 ptr 생성. ptr 함수가 scores 배열을 포인트하게 함.
    int *ptr;
    ptr = scores;

    // ptr로도 포인터로 주소 찝어서 값 바꿀 수 있음.
    printf("%d\n", *ptr);
    *ptr = 10000;
    *(ptr+2) = 30000;

    for (i = 0; i < 5; i++)
    {
        printf("scores[%d] : %d\n", i, scores[i]);
    }

    printf("aaaaaaaaaaaaaaaaa\n");
    for (i = 0; i < 5; i++)
    {
        printf("scores[%d] : %d (using ptr)\n", i, ptr[i]);
    }

    return 0;

}