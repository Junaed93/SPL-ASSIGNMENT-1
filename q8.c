#include <stdio.h>

int main() {
    char ch;

    scanf(" %c", &ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){       
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
            printf("%c\n", ch);
        }else{
            ch = ch + 32;
            printf("%c\n", ch);
        }
    }else{
        printf("Conversion Error\n");
    }

}
