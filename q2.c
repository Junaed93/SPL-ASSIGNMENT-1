#include <stdio.h>

int main(){
    float km, result;
    char choice;

    printf("Km: ");
    scanf("%f", &km);
    printf("Option: ");
    scanf(" %c", &choice);

    if (choice == 'a') {
        result = km * 1000;
        printf("%.2f km = %.2f Meters\n", km, result);
    }else if (choice == 'b') {
        result = km * 100000;
        printf("%.2f km = %.2f Centimeters\n", km, result);
    }else if (choice == 'c') {
        result = km * 0.6214;
        printf("%.2f km = %.2f Miles\n", km, result);
    }else if (choice == 'd') {
        result = km * 3280.8;
        printf("%.2f km = %.2f Feet\n", km, result);
    }else if (choice == 'e') {
        result = km * 39370;
        printf("%.2f km = %.2f Inche\n", km, result);
    }

}
