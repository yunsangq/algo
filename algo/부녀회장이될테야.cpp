#include <stdio.h>

int main() {
	int t, map[16][16] = { 0 };
	scanf("%d", &t);

	for (int j = 0; j <= 14; j++) {
		for (int l = 0; l < 14; l++) {
			if (j == 0) {
				map[j][l] = l + 1;
			}
			else if (l == 0) {
				map[j][l] = 1;
			}
			else {
				map[j][l] = map[j][l - 1] + map[j - 1][l];
			}
		}
	}

	for (int i = 0; i < t; i++) {
		int k, n;
		scanf("%d", &k);
		scanf("%d", &n);
		printf("%d\n", map[k][n - 1]);
	}

	return 0;
}