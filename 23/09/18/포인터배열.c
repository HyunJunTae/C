#include <stdio.h>


int main(void) {

    int arr1[3]; //arr1배열의 0, 1, 2 번째 칸 하나하나가 정수를 담음.
    arr1[0] = 1;
    arr1[1] = 3;
    arr1[2] = 19;

    int i;
    for (int i=0; i<=2; i++) {
        printf("%d ", arr1[i]);
    }
    
    printf("\n");

    



    const char* arr2[3]; // 0, 1, 2번째 칸 하나하나가 포인터를 담게됨.

    arr2[0] = "65";
    arr2[1] = "MED";
    arr2[2] = "BDE";

    for (int i = 0; i <= 2; i++)
    {
        printf("%s ", arr2[i]);
    }

    printf("\n");

    return 0;
    
}