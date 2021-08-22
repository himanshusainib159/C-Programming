#include <stdio.h>
int main()
{
    char s[100];
    scanf("%[^\n]%*c",s);
   // gets(s);
    printf("Hello World!\n%s",s);
}