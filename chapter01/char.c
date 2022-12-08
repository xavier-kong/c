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
