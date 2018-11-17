#include<stdio.h>		
#include<conio.h>
int main()
{
int i,j,n,k=1;
printf("enter the row size\n");
scanf("%d",&n);
for(i=1;i<=n;i++,k=k+2)
{
for(j=i;j<=n-1;j++)
        printf(" ");
        for(j=1;j<=k;j++)
        
printf("*");
printf("\n");
}
        
return 0;
}