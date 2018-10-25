// Program to print the series like 10,15...100
#include<stdio.h>
int main(){
    int i;
    for(i=10; i<=100; i=i++){
        if(i%2!=0)
            printf("%d\t",i);

    }
    return 0;
}
