#include <stdio.h>

void staircase (int n);

int main(int argc, char const *argv[])
{
	/* code */
	int count;
	scanf("%d", &count);

	staircase(count);

	return 0;
}

void staircase (int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n - 1; j++) {
			printf(" ");
		}
		int k = i;

		while (k >= 0) {
			printf("#");
			k--;
		}
		printf("\n");
	}
}