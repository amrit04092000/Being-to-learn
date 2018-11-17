#include<stdio.h>
#include<math.h>
int main()
{
    int a=0,b=1,c,n,i;
    printf("fabonnaci series term\n");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
         printf("%d\n",c);       
        a=b;
        b=c;
       
        
    
    }
    return 0;
    
}