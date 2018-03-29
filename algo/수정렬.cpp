#include <stdio.h>

int main() {
	int n, arr[1002] = { 0 };
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			int tmp;
			if (arr[j-1] > arr[j]) {
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}

	return 0;
}