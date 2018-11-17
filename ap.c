#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,p,n;
    printf("Enter a number for a p\n");
    scanf("%d",&a);
    printf("Enter common differnce \n and no of terms\n");
    scanf("%d %d",&b,&n);
    printf("Ap is:\n");
    for(i=1;i<=n;i++)
    {
      p=a+((i-1)*b);
        printf(" %d\n",p)  ;

    }
    printf("you have reached to your limit");
    return 0;
   
}
