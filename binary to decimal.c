#include <stdio.h>
#include<math.h>
int main()
{
    long int b;
    int d=0,i=0,rem;
    printf("enter binary number:\n");
    scanf("%ld",&b);
    while(b!=0)
    {
        rem=b%10;
        d=d+rem*pow(2,i);
        b=b/10;
        ++i;
    }
    printf(" binary number to decimal number=%d",d);
    return 0;
}
