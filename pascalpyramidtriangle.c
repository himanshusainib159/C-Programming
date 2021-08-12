#include<stdio.h>
int main()
{
    int n=5,c=1;
    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<n;k++)
        {
            printf(" ");
        }
        c=1;
        for(int j=1;j<=i;j++)
        {
            printf("%d ",c);
            c=c*(i-j)/j;
        }
        printf("\n");
    }

}