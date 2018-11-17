#include<stdio.h>
void main()
{
int a[3][3],i,j;
printf("enter Element of matrix\n");
for(i=1;i<=3;i++)
{
    for(j=1;j<=3;j++)
        scanf("%d",&a[i][j]);
}
printf("lower diagonal of matrix\n");
for(i=1;i<=3;i++)
{
    for(j=1;j<=3;j++)
        if(i>=j)
    {
        printf("%d",a[i][j]);
    }
    else
        printf("%d",0);

    printf("\n");
}
}
