#include <stdio.h>

const char *forLoop (int number);

int main(int argc, char const *argv[])
{
	/* code */
	int a, b;
	scanf("%d %d", &a, &b);

	if (a < b) {
		for (int i = a; i <= b; i++) {
			printf("%s\n", forLoop(i));
		}
	}

	return 0;
}

const char *forLoop (int number) {

	if (number > 9) {
		if(number%2 == 0) {
			return "even";
		} else {
			return "odd";
		}
	} else if (number == 1) {
		return "one";
	} else if (number == 2) {
		return "two";
	} else if (number == 3) {
		return "three";
	} else if (number == 4) {
		return "four";
	} else if (number == 5) {
		return "five";
	} else if (number == 6) {
		return "six";
	} else if (number == 7) {
		return "seven";
	} else if (number == 8) {
		return "eight";
	} else if (number == 9) {
		return "nine";
	}

	return 0;
}