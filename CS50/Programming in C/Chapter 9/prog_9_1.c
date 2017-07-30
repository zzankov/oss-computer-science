// Function to concatenate two strings
#include <stdio.h>

void concat (char result[], const char str1[], int n1,
	const char str2[], int n2) {
	// str1 copy to result
	for (int i = 0; i < n1; i++)
		result[i] = str1[i];

	// str2 copy to result
	for (int j = 0; j < n2; j++)
		result[n1+j] = str2[j];
}

int main (int argc, char *argv[])
{
    void concat (char result[], const char str1[], int n1,
		const char str2[], int n2);
	const char s1[5] = {'T', 'e', 's','t',' '};
	const char s2[6] = {'w', 'o', 'r', 'k','s','.'};
	char s3[11];

	concat(s3, s1, 5, s2, 6);
	for (int i = 0; i < 11; i++)
		printf ("%c", s3[i]);
	
	printf ("\n");

	return 0;
	
}