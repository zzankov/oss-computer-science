# include <stdio.h>

int NextLargestMultiple(int i, int j) {
	return i + j - i % j;
}

int main (int argc, char *argv[])
{
	int k;
	int i[] = {365, 12258, 996};
	int j[] = {7, 23, 4};

	for (k = 0; k < 3; k++)
		printf ("NLM of %i and %i is %i\n", i[k], j[k], 
			NextLargestMultiple(i[k], j[k]));

	return 0;

}