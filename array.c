#include <stdio.h>
int main()
{
    int A[5];//5 elements (integers) x 2 byte= 10 bytes
    A[0] =10;
    A[1] =15;
    A[3] =20;
    //printf("%d",A[1]);
    int b[3]={1,2,3};
    for(int i=0;i<3;i++)
    {
        printf("%d ",b[i]);
    }printf("\n----------------------------------------------------------------\n");
    printf("%d",*b);
}
