
#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,D,r,i,j;
    printf("enter vairable of equation\n");
scanf("%f %f %f",&a,&b,&c);
    printf("equation is:%.2f x² + %.2f x+ %.2f\n",a,b,c);
  

    j=(b*b)-(4*a*c);
    D= sqrt(j);
    if(j>0)
    {
    r=(-b+D)/(2*a);
        i=(-b-D)/(2*a);
        printf("Two roots are= %.2f and %.2f",r,i);
}
    else if(j==0)
    {
    r=(-b+D)/(2*a);
       printf("unique root=%.2f",r);
       
     }
    
    else
    {
    printf("imaginary solution");
        };
   return 0;
}
