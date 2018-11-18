#include<stdio.h>
void main()
{
    int a[100],i,counter=0,n,search;
    printf("enter range of array\n");
    scanf("%d",&n);
    printf("enter %d elements of array\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element is to be search\n");
    scanf("%d",&search);
    for(i=1;i<=n;i++)
    {
        if(a[i]==search)
        {
            counter=1;
            break;
        }
    }
        if(counter==1)
        {
            printf("element %d found at position=%d",search,i);
        }
        else
            printf("element not found\n");

}
