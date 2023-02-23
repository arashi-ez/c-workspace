// C code to demonstrate the working of
// strrchr()

#include <stdio.h>
#include <string.h>

// Driver function
int main()
{

	// initializing variables
	char st[] = "GeeksforGeeks";
	char ch = 'G';
	char* val;

	// Use of strrchr()
	// returns "ks"
	val = strrchr(st, ch);

	printf("String after last %c is : %s \n",
		ch, val);

	char ch2 = 'e';
   
	// Use of strrchr()
	// returns null
	// test for null
	 val = strrchr(st, ch2);

	printf("String after last %c is : %s \n",
		ch2, val);


    char ch3 = 'k';
    val = strrchr(st, ch3);
    printf("String after last %c is : %s ",
		ch3, val);


	return (0);
}
