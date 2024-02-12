#include <stdio.h>

int main() {
    float buy_price, sell_price;
    float percentage;

    printf("Buy: ");
    scanf("%f", &buy_price);
    printf("Sell: ");
    scanf("%f", &sell_price);

    if(buy_price >= sell_price){
        percentage = ((buy_price - sell_price) / buy_price) * 100;
        printf("Loss: %.2f %%\n", percentage);
    }else{
        percentage = ((sell_price - buy_price) / buy_price) * 100;
        printf("Profit: %.2f %%\n", percentage);
    }

}
