#include <stdio.h>
int main()
{
    char ch;
    int num1,num2,ans;
    printf("Menu");
    printf("\n____");
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Division");
    printf("\n4.Multiplication");
    printf("\nEnter your choice - ");
    scanf("%c",&ch);
    printf("\nEnter two numbers - ");
    scanf("%d %d",&num1,&num2);
    switch(ch)
    {
        case 1:
            ans=num1+num2;
            printf("\n%d + %d = %d",num1,num2,ans);
            break;
        case 2:
            ans=num1-num2;
            printf("\n%d - %d = %d",num1,num2,ans);
            break;
        case 3:
            ans=num1/num2;
            printf("\n%d / %d = %d",num1,num2,ans);
            break;
        case 4:
            ans=num1*num2;
            printf("\n%d * %d =%d",num1,num2,ans);
            break;
        //default:
          //  printf("You have entered wrong choice.");
    }
    return 0;
}