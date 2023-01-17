#include <stdio.h>
#include <string.h>

int main(void) {

    int price = 0;
    char name[20];
    char a_name[20];
    int n, p, k;

    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        price = 0;
        scanf("%d", &p);
        for(int j=0; j<p; j++) {
            scanf("%d %s", &k, a_name);
            if (k > price) {
                price = k;
                strcpy(name, a_name);
            }
        }
        printf("%s\n", name);
    }
}