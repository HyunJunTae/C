
#include <stdio.h>
#include <time.h>


int main(void) {

    // clock_t one, two, three;
    clock_t one;
    clock_t two;
    clock_t three;

    one = clock();
    for (int i=0; i<1000000; ) {
        i++;
    }

    two = clock();
    for (int i=0; i<10000000; ) {
        i++;
    }
    three = clock();

    printf("one : %d\n", one);
    printf("two : %d\n", two);
    printf("three : %d\n", three);

    return 0;
}

// int main(void) {

//     // clock_t one, two, three;
//     clock_t one;
//     clock_t two;
//     clock_t three;

//     one = clock(NULL);
//     for (int i=0; i<150000000; i++) {
//     }

//     two = clock(NULL);
//     for (int i=0; i<15000000; i++) {
//     }
//     three = clock(NULL);

//     printf("one : %d\n", one);
//     printf("two : %d\n", two);
//     printf("three : %d\n", three);

//     return 0;
// }