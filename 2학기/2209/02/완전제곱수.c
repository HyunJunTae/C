#include <stdio.h>

int main(void) {

    int n, m;
    scanf("%d %d", &n, &m);

    int i = 1;
    int count = 0;
    int num = 0;
    while(1) {
        if (i*i >= n && i*i <= m) {
            count += i*i;
            if (num == 0){
                num = i*i;
            }
        }
        else if (i*i > m)
            break;
        i++;
    }

    if (num == 0) {
        printf("%d", -1);
    }
    else {
        printf("%d\n%d", count, num);
    }

    return 0;
}