#include<stdio.h>
#include <stdlib.h>
void swap(int* x,int* y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=10,b=15;
    swap(&a,&b);
    printf("%d %d\n",a,b);
}