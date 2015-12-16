#include <stdio.h>

unsigned long long int aVeryBigSum (unsigned long long int a[], int count);

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	scanf("%d", &n);

	unsigned long long int *array = (unsigned long long int *) malloc(n*sizeof(unsigned long long int));
	for (int i = 0; i < n; i++) {
		scanf("%llu", &array[i]);
	}

	printf("%llu\n", aVeryBigSum(array, n));

	return 0;
}

unsigned long long int aVeryBigSum (unsigned long long int a[], int count) {
	unsigned long long int sum = 0;

	for (int i = 0; i < count; i++)
	{
		/* code */
		sum += a[i];
	}

	return sum;
}