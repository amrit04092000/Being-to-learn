#include<stdio.h>
#include<math.h>
int main()
{
    long int i,j,k,n,a;
    printf("enter term \n");
    scanf("%ld",&n);
     printf("numbers are:\n");
    for(i=2;i<=n;i++)
    {
        a=i;
        j=a*a;
        k=(j*j);
       printf("%ld\t",k);
    }
    printf("\nend");
    return 0;
}