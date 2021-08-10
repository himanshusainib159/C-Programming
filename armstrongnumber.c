#include<stdio.h>
#include<math.h>
int main()
{
    int n=1533,r,count,sum=0;
    int temp;
    for(temp=n;temp>0;)
    {
       // r=temp%10;
        temp=temp/10;
        count++;
    }
    for(temp=n;temp>0;)
    {
        r=temp%10;
        temp=temp/10;
        sum+=(int)pow(r,count);
    }
    if(sum==n)
    {
        printf("%d is an armstrong number",n);
    }
    else
    printf("%d is not an armstrong number",n);

}