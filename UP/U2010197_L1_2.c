#include <math.h>
#include <stdio.h>

int main()
{
    int num1, num2, num3;
  
    printf("Enter a number 1: \n");
  
    scanf("%d", &num1);
    
    printf("Enter a number 2: \n");
  
    scanf("%d", &num2);
    
    printf("Enter a number 3: \n");
  
    scanf("%d", &num3);
  
  
    if (num1 >= num2 && num1 >= num3){
        printf("%d is a biggest number", num1);
    }
    
    else if (num2 >= num1 && num2 >= num3){
        printf("%d is a biggest number", num2);
    }
    else if (num3 >= num1 && num3 >= num2){
        printf("%d is a biggest number", num3);
    }
  
    return 0;
}
