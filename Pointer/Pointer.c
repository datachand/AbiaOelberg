#include <stdio.h>
#include <math.h>

void update (int *a, int *b);

int main(int argc, char const *argv[])
{
	/* code */
	int a, b;
	int *pa = &a, *pb = &b;

	scanf("%d %d", &a, &b);
	update(pa, pb);
	// printf("%d\n%d\n", a, b);

	return 0;
}

void update (int *a, int *b) {
	printf("%d\n%d", (*a + *b), abs(*a - *b));
}