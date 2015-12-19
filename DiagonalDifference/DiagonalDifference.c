#include <stdio.h>

int diagonalDifference (int **a, int count);

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	scanf("%d", &n);

	int **array = (int **) malloc(n * sizeof(int *));
	for (int i = 0; i < n; i++) {
		array[i] = (int *) malloc(n * sizeof(int));
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &array[i][j]);
		}
	}

	printf("%d\n", diagonalDifference(array, n));

	return 0;
}

int diagonalDifference (int **a, int count) {
	int diagonalOne = 0, diagonalTwo = 0, k = count;
	for (int i = 0; i < count; i++) {
		diagonalOne += a[i][i];
		diagonalTwo += a[i][k-1];
		--k;
	}
	return abs(diagonalOne - diagonalTwo);
}