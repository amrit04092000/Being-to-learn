#include<stdio.h>
int main()
{
    int day,year;
    int month;
    printf("Enter month\n");
    scanf("%d",&month);
    printf("enter day\n");
    scanf("%d",&day);
    printf("enter year\n");
    scanf("%d",&year);
    if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12)&&(month<=12)){
       if(day>0&&day<=31){
                          printf("valid date\n");
                          printf("%d\t%d\t%d",day,month,year);
                          }
       else{
             printf("invalid date\n");
            }
    }
    else if((month==2)&&(month<=12)){
       if(day<=29){
              if(((year%100!=0)&&(year%4==0))||(year%400==0)){
                                                            printf("valid date\n");
                                                            printf("%d\t%d\t%d",day,month,year);
                                                            }
              else{
                    printf("invalid date\n");
                  }
                  }
       else{
    printf("invalid date\n");
           }
                              }
    else{
       if((month==4)||(month==6)||(month==9)||(month==11)&&(month<=12)){
             if(day<=30){
                          printf("valid date\n");
                            printf("%d\t%d\t%d",day,month,year);
                         }
             else{
                   printf("invalid date\n");
                 }
                                                                                       }
    else{
          printf("invalid date\n");
          }
        }
    return 0;
}
