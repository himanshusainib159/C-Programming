#include<stdio.h>
int main()
{
    int n=1,i,flag=1;
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }


    }
    if(flag==1&&n!=1)
    {
        printf("prime number");
    }
    else
        printf("not a prime number");
}