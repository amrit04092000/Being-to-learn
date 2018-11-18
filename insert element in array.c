#include<stdio.h>
void main()
{
    int a[100],i,k,p;
    int n;
    printf("enter range\n");
    scanf("%d",&n);
    printf("enter %d element of array\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position wher you want to insert number\n");
    scanf("%d",&p);
    printf("enter number\n");
    scanf("%d",&k);
    for(i=n-1;i>=p;i--)
    {
        a[i+1]=a[i];
        a[p+1]=k;
    }
    printf("array after insert a number\n");
    for(i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}

