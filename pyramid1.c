#include <stdio.h>
int main()
{
    int n=5,i,j,k=0;
    k=n+2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*n-1);j++)
        {
            if((i+j)<=n)
            {
                printf(" "); 
            } 
            else if((i+j)<k)
            {
                printf("*");
            }
        }
        printf("\n");
        k+=2;
    }
}