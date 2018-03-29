#include <stdio.h>

int count[10005] = { 0 };

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int input;
		scanf("%d", &input);
		count[input]++;
	}
	for (int j = 1; j <= 10000; j++) {
		count[j] = count[j - 1] + count[j];
	}
	for (int i = 1; i <= 10000; i++) {
		int index = count[i] - count[i - 1];
		if (i == 1)
			index = count[i];
		while (index--) {
			printf("%d\n", i);
		}
	}
	return 0;
}