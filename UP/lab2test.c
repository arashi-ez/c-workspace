/*
    U2010197
    Ochilov Abdullajon 
    Topic: cyclicSwap
*/
#include <stdio.h>
void rCyclicSwap(int *n1, int *n2, int *n3)
{
    // swapping in cyclic order
    int temp = *n2;
    *n2 = *n1;
    *n1 = *n3;
    *n3 = temp;
    }
    void lCyclicSwap(int *n1, int *n2, int *n3){
    int temp = *n2;
    *n2 = *n3;
    *n3 = *n1;
    *n1 = temp;

}
int main() {
    
    int a, b, c;
    
    printf("\nEnter a, b and c respectively: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int e = a;
    int f = b;
    int g = c;
    
    printf("Value before swapping:\n\n");
    printf("n1 = %d \nn2 = %d \nn3 = %d\n", a, b, c);

    rCyclicSwap(&a, &b, &c);
    lCyclicSwap(&e, &f, &g);

    printf("Value after right swapping: \n");
    printf("n1 = %d \nn2 = %d \nn3 = %d", a, b, c);

    printf("\nValue after left swapping: \n");
    printf("n1 = %d \nn2 = %d \nn3 = %d", e, f, g);
    
    return 0;
}