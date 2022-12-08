#include <stdio.h>

int main() {
	float celsius, fahr;
	int lower, upper, step;

	lower = -20;
	upper = 150;
	step = 10;

	celsius = lower;

	printf("C      F\n");
	printf("----------\n");

	while (celsius <= upper) {
		fahr = celsius * (9.0 / 5.0) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}
}
