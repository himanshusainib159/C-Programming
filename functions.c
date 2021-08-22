#include<stdio.h>
#include<stdlib.h>
/*
    return_type  func_type(paramters)
    // body of a function;
*/
int add(int x,int y)// prototype / signature /declaration
{
    int z = x+y;
    return z;
}
int main()
{
    int a=10,b=15,c;
    c = add(a,b); // calling a function
    printf("%d",c);
    return 0;
}