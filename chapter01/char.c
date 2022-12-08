#include <stdio.h>

int main() {
	int c, blank, tabs, nl;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			++nl;
		} else if (c == '\t') {
			++tabs;
		} else if (c == ' ') {
			++blank;
		}
	}

	printf("blanks: %d, tabs: %d, new lines: %d", blank, tabs, nl);
}

/*Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or*/
/*more blanks by a single blank.*/
