#include <stdio.h>
int main()
{
    int n=12321,r,temp,sum=0;
    temp=n;
    while(temp>0)
    {
        r= temp%10;
        sum = sum*10 + r;
        temp=temp/10;
    }
    if(n==sum)
    {
        printf("palindrome number");
    }
    else
    {
        printf("non-palindrome number");
    }
}