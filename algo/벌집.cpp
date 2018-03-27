#include <stdio.h>

int main() {
	int n, cnt = 1, i = 1;
	scanf("%d", &n);
	while (1) {
		if (n == 1) {
			printf("1\n");
			break;
		}
		if (i >= n) {
			printf("%d\n", cnt);
			break;
		}

		i = i + (6 * cnt);
		cnt++;
	}
	return 0;
}