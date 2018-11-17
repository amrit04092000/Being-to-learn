#include<stdio.h>
void main()
{
    int i,c,h=0;
    printf("Prime Number between 1 to 100\n");
    for(i=2;i<100;i++)
    {
    for(c=2;c<i;c++)
        if(i%c==0)
    {

        break;
    }
    if(i==c)
    {
        printf("%d\n",c);
    }
    }

}
