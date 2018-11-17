#include<conio.h>
int main()
{
int a,b;
clrscr();
printf(“enter three integer number\n”);
scanf(“%d%d”,&a,&b);
if(a>b)
goto first;
else
goto second;
first:
printf(“a is greater”);
goto stop;
second:
printf(“b is greater”);
goto stop;
stop:
getch();
    return 0;
}