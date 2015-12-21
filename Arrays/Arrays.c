#include <stdio.h>

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	scanf("%d", &n);

	if (n > 0 && n <= 1000) {
		int *array = (int *) malloc(n * sizeof(int)); 

		for (int i = 0; i < n; i++) {
			scanf("%d", &array[i]);
		}

		for (int i = n; i > 0; i--) {
			printf("%d ", array[i-1]);
		}
	}

	return 0;
}