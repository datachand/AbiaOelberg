#include <stdio.h>

int solveMeFirst(int a, int b);

int main(int argc, char const *argv[])
{
	/* code */
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	int sum;
	sum = solveMeFirst(num1, num2);
	printf("%d", sum);
	return 0;
}

int solveMeFirst(int a, int b) {
	return a + b;
}