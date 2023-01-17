#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int k, a, sum=0;
    for (int i=0; i<n; i++) {
        scanf("%d", &k);
        for (int j=0; j<k; j++) {
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}

// int main(void){
//     int t,n,r,s;
//     scanf("%d",&t);
//     while(t--){
//         s=0;
//         scanf("%d",&n);
//         while(n--){
//             scanf("%d",&r);
//             s+=r;
//         }
//     printf("%d\n",s);
//     }
// }