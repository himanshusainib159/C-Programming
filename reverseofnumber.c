#include<stdio.h>
int main()
{
   /* int n=1724,r,count=0;
    while(n>0)
    {
        r=n%10;
        printf("%d ",r);
        count++;
        n=n/10;

    }
    printf("\ncount - %d ",count);
    */
   int n,r,sum=0;
   scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum= sum*10 +r;
        n=n/10;

    }
    printf("%d",sum);
}