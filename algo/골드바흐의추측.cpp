#include <stdio.h>

int main() {
	int map[10000] = { 1,1 };
	for (int i = 2; i<10000; i++) {
		if (!map[i]) {
			for (int j = i * i; j<10000; j += i) {
				map[j] = 1;
			}
		}
	}

	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int n;
		scanf("%d", &n);

		for (int j = n/2; j > 0; j--) {
			if (!map[j] && !map[n - j]) {
				printf("%d %d\n", j, n - j);
				break;
			}
		}
	}
	return 0;
}