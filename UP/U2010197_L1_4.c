#include <math.h>
#include <stdio.h>

int main()
{
    int num, fac=1, i;
  
    printf("Enter a number : \n");
  
    scanf("%d", &num);
    
    for(i=1; i<=num; ++i){
        fac=fac*i;
    }
    printf("factorial is %d", fac);
    return 0;
}
