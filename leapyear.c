#include<stdio.h>
int main()
{
    int y;
    printf("enter a year for checking leap or not\n");
    scanf("%d",&y);
    (((y%100!=0)&&(y%4==0))||(y%400==0))?printf("year is leap"):printf("year is not a leap year");
    return 0;
}