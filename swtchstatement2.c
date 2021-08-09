#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a vowel - ");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
                    printf("Entered charater is vowel");
                    break;
         default:
                    printf("Unexpected character");           
    }
    

}