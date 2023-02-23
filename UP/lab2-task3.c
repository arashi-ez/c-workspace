/*
    Name:Ochilov Abdullajon
    ID: U2010197
*/
#include <stdio.h>
#include <string.h>

int main()
{
	char st[] = "INHA University in Tashkent";
	char ch = 'U';
	char* dest;
    printf("Content: %s\n",st);
	dest = strrchr(st, ch);

	printf("String after last %c is : %s \n",
		ch, dest);

	char ch2 = 'T';

    dest = strrchr(st, ch2);

	printf("String after last %c is : %s \n",
		ch2, dest);


    char ch3 = 'k';
    dest = strrchr(st, ch3);

    printf("String after last %c is : %s ",
		ch3, dest);
	return 0;
}
