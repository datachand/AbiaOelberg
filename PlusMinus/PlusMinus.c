#include <stdio.h>

double plusMinus (int current, int count);

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	scanf("%d", &n);

	int *array = (int *) malloc(n * sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &array[i]);
	}

	int positive = 0, negative = 0, zero = 0;

	for (int i = 0; i < n; i++) {
		if (array[i] > 0) {
			positive++;
		} else if (array[i] < 0) {
			negative++;
		} else if (array[i] == 0) {
			zero++;
		}
	}

	printf("%f\n", plusMinus(positive, n));
	printf("%f\n", plusMinus(negative, n));
	printf("%f\n", plusMinus(zero, n));

	return 0;
}

double plusMinus (int current, int count) {
	return ((double) current / (double)count);
}