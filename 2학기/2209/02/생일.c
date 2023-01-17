#include <stdio.h>
#include <string.h>

int main(void) {

    int n;
    scanf("%d", &n);

    char name[15], name_max[15], name_min[15];
    int a[3] = {0}, b[3] = {32, 13, 2011}, c[3];

    for(int i=0; i<n; i++) {
        scanf("%s %d %d %d", name, &c[0], &c[1], &c[2]);
        
        if (c[2] > a[2]) {
            memcpy(a, c, sizeof(int)*3);
            strcpy(name_max, name);
        }

        else if (c[2] == a[2]) {
            if (c[1] > a[1]) {
                memcpy(a, c, sizeof(int)*3);
                strcpy(name_max, name);
            }
            else if (c[1] == a[1]) {
                if (c[0] > a[0]) {
                    memcpy(a, c, sizeof(int)*3);
                    strcpy(name_max, name);
                }
            }
        }

        if (c[2] < b[2]) {
            memcpy(b, c, sizeof(int)*3);
            strcpy(name_min, name);
        }

        else if (c[2] == b[2]) {
            if (c[1] < b[1]) {
                memcpy(b, c, sizeof(int)*3);
                strcpy(name_min, name);
            }
            else if (c[1] == b[1]) {
                if (c[0] < b[0]) {
                    memcpy(b, c, sizeof(int)*3);
                    strcpy(name_min, name);
                }
            }
        }
    }
    printf("%s\n%s", name_max, name_min);

    return 0;
}



// int main(){
//     char o[100][16];
//     int d,m,y,k[100],i,n,a,b;
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%s %d%d%d",o[i],&d,&m,&y);
//         k[i]=y*10000+m*100+d;
//     }
//     a=b=0;
//     for(i=0;i<n;i++){
//         if(k[i]>k[a]) a = i;
//         if(k[i]<k[b]) b = i;
//     }
//     printf("%s\n%s",o[a],o[b]);
// }