#include<stdio.h>
int main()
{
    int n=1724,r,count=0;
    while(n>0)
    {
        r=n%10;
        printf("%d ",r);
        count++;
        n=n/10;

    }
    printf("\ncount - %d ",count);

}