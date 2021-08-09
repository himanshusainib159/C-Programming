#include <stdio.h>
int main()
{
    int i,num=6,sum=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
            sum+=i;
        }
        
    }
    printf("sum = %d",sum);
    if(sum==2*num)
    {
        printf("\nperfect number");
    }
    else
    printf("\nnot a perfect number");
}