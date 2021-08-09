#include<stdio.h>
int main()
{
    int num=32;
    while(num>1)
    {
        if((num&1)==0)
        {
            // num/=2;
            num>>=1;//n>>k = n/2^k   n<<k = n*2^k
        }
        else
        {
            break;
        }
    }
    if(num==1)
    {
        printf("power of 2");
    }
    else
    {
        printf("not a power of 2");
    }
}