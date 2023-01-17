#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int main(void) {

    int num, cut;

    printf("Number of class : ");
    scanf("%d", &num);
    printf("Cutline : ");
    scanf("%d", &cut);


    int score;
    int sum = 0;
    int count = 0;
    
    for (int i=0; i<num; i++) {
        printf("Input score #%d : ", i);
        scanf("%d", &score);

        sum += score;
        if (num < cut) {
            count += 1;
        }
    }
    
    printf("Average score : %.2f\n", sum/(float)num);
    printf("Number of failures : %d\n", count);

    return 0;
}