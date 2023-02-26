/*
    Name:Ochilov Abdullajon
    ID: U2010197
*/
#include <stdio.h>
#include <string.h>
//this code is finding the sequence of given sentence, if found a character.

int main()
{
	char st[100];
    char* dest;
    //this part of code asks to input a sentence which will represent in future usage
    printf("Type your content to seek strings sequences: ");
    gets(st);
    
    //first seek 
	char ch = 'e';
    
    printf("Content: %s\n",st);
	dest = strrchr(st, ch);
	printf("String after last %c is : %s \n", ch, dest);

    //second seek
    char ch2 = 't';
    dest = strrchr(st, ch2);
	printf("String after last %c is : %s \n", ch2, dest);
    
    //third seek
    char ch3 = 'a';
    dest = strrchr(st, ch3);
    printf("String after last %c is : %s ",	ch3, dest);

    return 0;
}