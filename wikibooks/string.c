#include "stdio.h"
#include <string.h>

void swap(char *string, int x, int y) {
	char temp = string[x];
	string[x] = string[y];
	string[y] = temp;

}

char* reverseString(char *string)
{
	swap(string, 0, 3);
	swap(string, 1, 2);
	return string;
}

int main(void)
{
	char string[4];

	printf("Enter a string of length 4");
	scanf("%s", string);
	printf("Revsersed is: %s", reverseString(string));

	return 0;
}
