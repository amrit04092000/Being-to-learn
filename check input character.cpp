#include<stdio.h>
int main()
{
    char a;
    printf("enter char\n");
    scanf("%s",&a);
    if(a>=65&&a<=90)
    printf("%c is capital",a);
    else if(a>=97&&a<=122)
    printf("%c is lower character",a);
    else if(a>=48&&a<=57)
    printf("%d is digit",a);
    else
    printf("special symbol");
    return 0;

}
