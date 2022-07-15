#include <stdio.h>



int main(void) {

    int a = 10;
    int b;
    b = a;
    a = 100;



    int c = 1000;
    int *d = &c;

    c = 10000;
    *d = 100000;
    // d가 c의 주소를 참조할 때, c가 바뀌는 d가 바뀌든 뭐 바뀌면 둘 다 같이 바뀜.


    printf("%d %d %d %d\n", a, b, c, d);
    printf("%d %d %d %d\n", a, b, c, *d);


    int aa[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        };
    printf("%d %d %d %d\n", aa, aa[0], aa[1], aa[0][0]);

    int *p1 = aa[0];
    printf("%d %d %d\n", p1[0], p1[1], p1[2]);
    int *p2 = aa[1];
    printf("%d %d %d\n", p2[0], p2[1], p2[2]);

    return 0;
}