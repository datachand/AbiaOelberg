#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int n;
	cin >> n;

	if (n > 0 && n <= 1000) {
		int *array = (int *) malloc(n * sizeof(int)); 

		for (int i = 0; i < n; i++) {
			cin >> array[i];
		}

		for (int i = n; i > 0; i--) {
			cout << array[i-1] << " ";
		}
	}

	return 0;
}