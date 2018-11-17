#include<stdio.h>
int main()
{
int a,b,h,l,i;
printf("enter two number\n");
scanf("%d\n%d",&a,&b);
for(i=1;i<=a,i<=b;i++)
{
if(a%i==0&&b%i==0)
h=i;
}
l=(a*b)/h;
printf("hcf value=%d\n lcm value=%d",h,l);
}