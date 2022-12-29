#include <stdio.h>

int is_positive(int i)
{
	if (i < 0) {
		return 0;
	}

	return 1;
}

int main(void)
{
	printf("%d is %d", 1, is_positive(1));

	printf("%d is %d", -1, is_positive(-1));

}
