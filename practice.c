#include<stdio.h>
int main()
{
    int c,num;
    c=1;
    printf("Enter number - ");
    scanf("%d",&num);
    while(c<=10)
    {
        printf("%d * %d = %d\n",num,c,num*c);
        c++;
    }

}