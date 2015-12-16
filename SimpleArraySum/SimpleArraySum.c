#include <stdio.h>

int simpleArraySum(int a[], int count) {
	int sum = 0;

	for(int i = 0; i < count; i++) {
		sum += a[i];
	}

	return sum;
}

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	scanf("%d", &n);

	int *array = (int *) malloc(n*sizeof(int));

	for(int arr_i = 0; arr_i < n; arr_i++) {
		scanf("%d", &array[arr_i]);
	}

	printf("%d", simpleArraySum(array, n));

	return 0;
}