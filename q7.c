#include <stdio.h>

intmain(){
  
  int num1, num2, num3;

  scanf ("%d %d %d", &num1, &num2, &num3);
  
  if (num1 >= num2 && num1 >= num3){
	if (num2 >= num3){
		printf ("%d %d\n", num1, num2);
    }else{
		printf ("%d %d\n", num1, num3);
	}
	}else if (num2 >= num1 && num2 >= num3){
	  if (num1 >= num3){
		printf ("%d %d\n", num2, num1);
	}else{
		printf ("%d %d\n", num2, num3);
	}
	}else{
	  if (num1 >= num2){
		printf ("%d %d\n", num3, num1);
	}else{
		printf ("%d %d\n", num3, num2);
	}
	}

}
