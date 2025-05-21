#include <stdio.h>

// int fibo(int n) {
//     if (n == 0) {
//         return 0;
//     }
//     if (n == 1) {
//         return 1;
//     }
//     return fibo(n-1) + fibo(n-2);
// }

// int main(void) {
    // int n;
    // scanf("%d", &n);

//     printf("%d", fibo(n));
// }


int main(void) {
    int n;
    scanf("%d", &n);

    long long a = 0;
    long long b = 1;
    long long c;

    if (n == 0)
        printf("%d", 0);
    else if (n == 1)
        printf("%d", 1);
    else {
        for(int i=1; i<n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%lld", c);
    }
}

// int main()
// {
// 	int n;
// 	scanf("%d", &n);
	
// 	long long a=0, b=1;
// 	for(int i=1; i<n; i++)
// 	{
// 		b=b+a;
// 		a=b-a;	
// 	}
// 	printf("%lld\n", b);
//  }