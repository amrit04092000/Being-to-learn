#include<stdio.h>
void main()
{
    int i;
    int a=0,b=1,c=2,sum;
    printf("Tribonacci series upto 20\n");
    printf("%d\t%d\t%d\t",a,b,c);
    for(i=0;i<=17;i++)
    {
        sum=a+b+c;
        printf("%d\t",sum);
        a=b;
        b=c;
        c=sum;
    }
}
