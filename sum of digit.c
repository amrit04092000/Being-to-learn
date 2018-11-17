#include<stdio.h>
void main()
{
    int i,sum=0,rem;
    printf("enter number\n");
    scanf("%d",&i);
    printf("sum of digit you enter \n");
    while(i!=0)
    {
        rem=i%10;
        sum+=rem;
        i/=10;

    }
    printf("%d",sum);
}

