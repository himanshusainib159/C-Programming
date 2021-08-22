#include <stdio.h>
int main()
{
    int arr[2][3]={{2,3,6},{4,5,8}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }printf("\n");
    }printf("----------------------------------------------\n");
    printf("%d",arr);
    return 0;
}