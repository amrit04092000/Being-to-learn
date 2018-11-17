#include<stdio.h>
void main()
{
    int n,s=0,rev=0,p,temp,temp1,rem;
    printf("Enter number to check whether it is Magic number or Not\n");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
     rem=temp%10;
     s=s+rem;
     temp=temp/10;
    }
    temp1=s;
 while(temp1!=0)
    {
        rem=temp1%10;
        rev*=10+rem;
        temp1=temp1/10;
    }
    p=rev*s;
    if(s<10)
    {
    if(s*s==n)
    {
        printf("%d is a magic number",n);
    }
    else
        printf("%d is not a magic number",n);
    }
   else if(p==n)
    {
        printf("%d is a magic number",n);
    }
    else
    printf("%d is not a magic number ",n);
}
