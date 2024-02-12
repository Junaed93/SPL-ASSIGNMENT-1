#include <stdio.h>

int main(){
    int num1, num2, num3;    
    int max, min;
       
    scanf("%d",  &num1);    
    scanf("%d",  &num2);   
    scanf("%d",  &num3);
    
    max = num1;
    min = num1;

    if(num2 > max){
        max = num2;
    }else if(num2 < min){
        min = num2;
    }
    if(num3 > max){
        max = num3;
    }else if(num3 < min){
        min = num3;
    }

    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
     
}