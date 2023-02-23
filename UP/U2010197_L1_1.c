#include <math.h>
#include <stdio.h>

int main()
{
    int a = 2;
    printf("Print any number: ");
    scanf("%d",&a);
    
    if(a%2==0){
        printf("The Number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}
