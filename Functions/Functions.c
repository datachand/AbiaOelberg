#include <stdio.h>

int printTheGreatestFunction (int a, int b, int c, int d);

int main(int argc, char const *argv[])
{
	/* code */
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d\n", printTheGreatestFunction(a, b, c, d));
	return 0;
}

int printTheGreatestFunction (int a, int b, int c, int d) {
	if (a > b && a > c && a > d) {
		return a;
	} else if (b > a && b > c && b > d) {
		return b;
	} else if (c > b && c > a && c > d) {
		return c;
	} else {
		return d;
	}

	return 0;
}