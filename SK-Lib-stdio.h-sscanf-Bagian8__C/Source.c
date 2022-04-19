#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by Microsoft
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main(void) {
	char  tokenstring[] = "17 34 7...";
	char  s[81];
	char  c;
	int   i;
	float fp;

	// Input various data from tokenstring:
	// max 80 character string:
	sscanf(tokenstring, "%80s", s); // C4996
	sscanf(tokenstring, "%c", &c);  // C4996
	sscanf(tokenstring, "%d", &i);  // C4996
	sscanf(tokenstring, "%f", &fp); // C4996
	// Note: sscanf is deprecated; consider using sscanf_s instead

	// Output the data read
	printf("String    = %s\n", s);
	printf("Character = %c\n", c);
	printf("Integer:  = %d\n", i);
	printf("Real:     = %f\n", fp);

	_getch();
	return 0;
}