#include<stdio.h>
int main()
{
    int a=0,b=1,c,i,n,j;
    printf("enter limit\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=0;
        b=1;
        printf("\t%d",b);
        for(j=1;j<i;j++)
        {
            c=a+b;
            printf("\t%d",c);
            a=b;
            b=c;
        }
        printf("\n");
    }
    return 0;
}