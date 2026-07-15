//passing array name as an argument to a function & summation of all the elements

#include <stdio.h>
int add(int b[],int len){  // int *b[] can also be written
    int sum = 0 ;
    for (int i=0;i<len;i++){
        sum += b[i];
    }
    return sum;
}
int main(){
    int a[]={1,2,3,4,7};
    int len = sizeof(a)/sizeof(a[0]);
    printf("sum is %d",add(a,len)); //whole array is not passed, just the base address of array
    return 0 ;
}


//-----OUTPUT-----
// sum is 17
