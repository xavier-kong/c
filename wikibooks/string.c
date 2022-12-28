#include "stdio.h"
#include <string.h>

void printOnLine(char *string) {
	int curr = 0;
	int length = strlen(string);

	while (curr < length) {
		if (string[curr] == ' ') {
			printf("\n");
		} else {
			printf("%c", string[curr]);
		}
		curr++;
	}

	printf("\n");
}

int main(void)
{
	char string[10];

	printf("Enter a sentence of total length 10?");
	fgets(string, 10, stdin);
	printOnLine(string);

	return 0;

}
