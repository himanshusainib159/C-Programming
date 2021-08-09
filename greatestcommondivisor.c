#include <stdio.h>
int main()
{
    int n=30,m=21;
    int temp1=n,temp2=m;
    while(n!=m)
    {
        if(n>m)
        {
            n-=m;
        }
        else
        {
            m-=n;
        }
    }
    printf("%d is the gcd of %d and %d",n,temp1,temp2);
}