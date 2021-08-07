#include<stdio.h>
int main()
{
    int hour;
    scanf("%d",&hour);
    if(hour>=9 && hour<=18)
    {
        printf("working hour");
    }
    else
    printf("non-working hour");
    return 0;
}