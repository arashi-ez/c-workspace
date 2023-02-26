/*
    Ochilov Abdullajon
    U2010197
*/

#include <stdio.h>

//Function to extract the longest common prefix
int lcp(const char *str1, const char *str2, char *found) {
    int i;
    
    for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++) {
        found[i] = str1[i];
    }
    found[i] = '\0';
    return i;
}

int main(void) {
    char str1[100];
    char str2[100];
    char prefix[100]; 
    
    printf("\nGive string 1: ");
    if (scanf("%99s", str1) != 1)
        return 1;
    printf("\nGive string 2: ");
    if (scanf("%99s", str2) != 1)
        return 1;
    
    //Print prefix
    lcp(str1, str2, prefix); 

    printf("The Longest common prefix is: %s\n", prefix);
    return 0;
}