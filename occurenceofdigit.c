#include <stdio.h>
int main()
{
    int r,num=123223,dig=1,count=0;
    while(num>0)
    {
        r=num%10;
        if(r==dig)
        {
            count++;
        }
        num=num/10;

    }
    printf("%d",count);

}