#include <stdio.h>

int main()
{
    int num[];
    int sum=0;
    int r;
    int temp =num;
    for (;temp>0;)
    {
        r=temp%10;
        sum+=r;
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}