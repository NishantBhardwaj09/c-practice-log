#include <stdio.h>
#define N 5
int main(){
    int a[N] , *p;

    printf("enter %d elements in the array \n", N);
    for(p = a; p<= a+N-1; p++ ){
        scanf("%d",p);
    }

    printf("elements in the reverse order :");
    for(p=a+N-1 ; p>=a ; p-- ){
        printf("%d ",*p);
    }

    return 0;
}
/*----OUTPUT----
enter 5 elements in the array
11
12
13
14
15
elements in the reverse order :15 14 13 12 11
*/
