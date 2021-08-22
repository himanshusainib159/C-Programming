#include<stdio.h>
#include <stdlib.h>
struct Rectangle 
{
    int length,breadth;
};
int main()
{
    struct Rectangle *r = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    r->length = 10;
    r->breadth = 20;
    printf("%d %d",(*r).length,(*r).breadth);
}