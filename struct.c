#include<stdio.h>
struct Rectangle        // int // user defined data types
{
    int length;         //2
    int breadth;        //2

};      //4 byte
struct Complexnumber
{
    int real,imaginary;
};
struct Student
{
    int roll;
    char name[25],dept[10],address[50];
};
struct card
{
    int face;
    int color;
    int shape;
};
int main()
{
    struct Rectangle r; // memory allocated // declaration 
    r.length=10;
    r.breadth=15;
    struct Rectangle temp={3,8};
    //printf("%d %d",r.length,r.breadth);
    
    
    struct card c[52]= {{1,0,0},{1,1,1},{1,3,1}};//={1,0,0};
  /*  c[0].color=0;
    c[0].shape=1;   */
  /*  c.shape=0;
    c.face=1;
    c.color=0;  */
    printf("%d %d %d",c[2].face,c[2].shape,c[2].color);

}