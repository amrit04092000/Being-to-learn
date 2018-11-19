#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,j=0,p=0;
    printf("enter string\n");
    gets(a);
    for(i=0;i<50;i++)
    {
        if(a[i]=='\0')
        {
            break;
        }
        j++;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]==a[j-i])

        {
            break;
        }
        p++;
    }
    if(p==j)

    {
        printf("string is pallindrome\n");
    }
    else
        printf("not a pallindrome");
}
