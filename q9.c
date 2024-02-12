#include <stdio.h>

int main() {
    int amount;
    scanf("%d", &amount);

    int tk_1000 = 0, tk_500 = 0, tk_100 = 0, tk_50 = 0, 
    tk_20 = 0, tk_10 = 0, tk_5 = 0, tk_2 = 0, tk_1 = 0;

    if(amount >= 1000){
        tk_1000 = amount / 1000;
        amount %= 1000;
    }
    if(amount >= 500){
        tk_500 = amount / 500;
        amount %= 500;
    }
    if(amount >= 100){
        tk_100 = amount / 100;
        amount %= 100;
    }
    if(amount >= 50){
        tk_50 = amount / 50;
        amount %= 50;
    }
    if(amount >= 20){
        tk_20 = amount / 20;
        amount %= 20;
    }
    if(amount >= 10){
        tk_10 = amount / 10;
        amount %= 10;
    }
    if(amount >= 5){
        tk_5 = amount / 5;
        amount %= 5;
    }
    if(amount >= 2){
        tk_2 = amount / 2;
        amount %= 2;
    }
    if(amount >= 1){
        tk_1 = amount / 1;
        amount %= 1;
    }

    if(tk_1000 > 0){ 
        printf("1000 Tk Note: %d\n", tk_1000);
    }
    if(tk_500 > 0){
        printf("500 Tk Note: %d\n", tk_500);
    }
    if(tk_100 > 0){
        printf("100 Tk Note: %d\n", tk_100);
    }
    if(tk_50 > 0){
        printf("50 Tk Note: %d\n", tk_50);
    }
    if(tk_20 > 0){
        printf("20 Tk Note: %d\n", tk_20);
    }
    if(tk_10 > 0){
        printf("10 Tk Note: %d\n", tk_10);
    }
    if(tk_5 > 0){ 
        printf("5 Tk Note: %d\n", tk_5);
    }
    if(tk_2 > 0){ 
        printf("2 Tk Note: %d\n", tk_2);
    }
    if(tk_1 > 0){ 
        printf("1 Tk Note: %d\n", tk_1);
    }

}
