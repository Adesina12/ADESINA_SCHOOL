#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// create the file pointer
	// Open the file using fopen()
	// Process the file using: getc, putc, getw, pusw, fprintf, fscanf fgets, fputs, frof
	// close the file using fclose()
	
	FILE *mymy;
	mymy = fopen("myfile.txt", "w");
	fprintf(mymy, "%s", "Hello World");
	fclose(mymy);

	return (0);
}
