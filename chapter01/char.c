#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			while ((c = getchar()) == ' ') {}
			printf(" ");
		}
		printf("%c", c);
	}
}

/*Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or*/
/*more blanks by a single blank.*/
