#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*int n=10;
    int *p; // pointer
    p = &n;
    printf("%d %x\n", n, p);    */
    int *A = (int*)malloc(sizeof(int)*2);
    A[0] =2;
    A[1] =4;
    printf("%d %d",A[0],A[1]);
}