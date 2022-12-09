#include <stdio.h>

int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			printf("\f");
		} else if (c == '\b') {
			printf("\b");
		} else if (c == '\\') {
			printf("\\");
		} else {
			printf("%d" ,c);
		}
	}
}

