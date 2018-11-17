#include<stdio.h>
int main()
{
    long int  d,q,r;
    int b[100],i=1,j;
    printf("enter decimal no.\n");
    scanf("%ld",&d);
    q=d;
    while(q!=0)
    {
        b[i++]=q%2;
        q=q/2;
    }
    printf("equivalent binary:%ld\n",d);
     while(j>0)
    {
        j=i-1;
        printf("%d",b[j]);
        j--
    }
    return 0;
}