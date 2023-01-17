#include <stdio.h>
#define OFFSET 100

int main(void) {

    int a=0, b=0, c=0, d=0, n;

    printf("ÄáÀÇ °³¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À : ");
    scanf("%d", &n);

    a = (n+OFFSET) / (4 + OFFSET) + (n + OFFSET) / (8 + OFFSET);
    b = (n+OFFSET) / (3 + OFFSET) + (n + OFFSET) / (7 + OFFSET) + (n + OFFSET) / (11 + OFFSET);
    c = (n+OFFSET) / (2 + OFFSET) + (n + OFFSET) / (6 + OFFSET) + (n + OFFSET) / (10 + OFFSET) + (n + OFFSET) / (13 + OFFSET);
    d = (n+OFFSET) / (1 + OFFSET) + (n + OFFSET) / (5 + OFFSET) + (n + OFFSET) / (9 + OFFSET) + (n + OFFSET) / (12 + OFFSET) + (n + OFFSET) / (14 + OFFSET) + (n + OFFSET) / (15 + OFFSET);

    printf("±×¸©-1 ÄáÀÇ °³¼ö(2) : %d\n", a);
    printf("±×¸©-2 ÄáÀÇ °³¼ö(3) : %d\n", b);
    printf("±×¸©-3 ÄáÀÇ °³¼ö(4) : %d\n", c);
    printf("±×¸©-4 ÄáÀÇ °³¼ö(6) : %d\n", d);

    return 0;
}