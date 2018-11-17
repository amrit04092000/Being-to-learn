#include<stdio.h>
int main()
{

int a,b,c;
char ch;
printf("enter two number\n");
scanf("%d%d",&a,&b);
fflush(stdin);
printf("enter your choice\n");
printf("1. enter + for addition\n");
printf("2. enter - for subtraction\n");
printf("3. enter * for multiplication\n");
printf("4. Enter / for division\n");
printf("5. enter" "%" "for modulo dividion\n");
scanf("%c",&ch);
switch(ch)
{
case '+':
c=a+b;
break;
case '-':
c=a-b;
break;
case '*':
c=a*b;
break;
case '/':
c=a/b;
break;
case '%':
c=a%b;
break;
default:
printf("wrong choice");
}
printf("calculated value=%d",c);
    return 0;
}
