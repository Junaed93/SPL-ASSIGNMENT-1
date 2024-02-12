#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    int D, x1, x2;
    scanf("%d %d %d", &a, &b, &c);

    D = pow(b , 2) - 4 * a * c;

    if(D > 0){
        x1 = (-b + sqrt(D)) / (2.0 * a);
        x2 = (-b - sqrt(D)) / (2.0 * a);
        printf("%d, %d\n", x1, x2);
    }else if(D == 0){
        x1 = x2 = -b / (2.0 * a);
        printf("%d\n", x1);
    }else{
        int real = -b / (2.0 * a);
        int imaginary= sqrt(-D) / (2.0 * a);
        if(imaginary == 1){
            printf("%d + i, %d - i\n", real,real);
        }else{
        printf("%d + %di, %d - %di\n", real, imaginary, real, imaginary);
    }

  }

}
