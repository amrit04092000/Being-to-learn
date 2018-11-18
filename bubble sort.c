#include<stdio.h>
void main()
{
    int a[100],i,j,n,c;
    printf("enter range\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter numbre%d=\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        if(a[j]>a[j+1])
        {
            c=a[j];
         a[j]=a[j+1];
         a[j+1]=c;
        }
    }
        for(i=0;i<n;i++)
        {
        printf("%d\n",a[i]);
        }

}
