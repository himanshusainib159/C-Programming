#include<stdio.h>
int main()
{
    int n=20,sum=0,i;
    for(i=3;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum+=i;
        }
    }
    printf("sum= %d\n",sum);
}