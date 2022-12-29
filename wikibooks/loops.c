#include <stdio.h>


void printStars(int stars)
{
	for (int i = 0; i < stars; i++) {
		printf("*");
	}
}


void isoTri(int n)
{
	for (int i = 0; i < n; i++) {
		int stars = i + 1;
		printStars(stars);
		printf("\n");
	}

}

int main(void)
{
	isoTri(3);
	return 0;
}
