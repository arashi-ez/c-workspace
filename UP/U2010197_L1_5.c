#include <math.h>
#include <stdio.h>

int main()
{
    int a, b, i=1, m=1;
  
    printf("Enter a number a : \n");
  
    scanf("%d", &a);
    
    printf("Enter a number b : \n");
  
    scanf("%d", &b);
    
    while(i<=b){
        
        i++;
        m=m*a;
        
    }
    printf("Number a in power of number b is %d", m);
    return 0;
}
