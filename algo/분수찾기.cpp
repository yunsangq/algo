#include <stdio.h>

int main() {
	int n, cnt = 1;
	scanf("%d", &n);

	int x = 1, y = 1, r = 0, d = 0;
	while (1) {
		if (cnt == n) {
			printf("%d/%d\n", x, y);
			break;
		}
		if (r == 0 && x == 1) {
			d = 0;
			r = 1;
			y += 1;
			cnt++;
			continue;
		}
		if (r == 1 && y >= 2) {
			x += 1;
			y -= 1;
			cnt++;
			continue;
		}
		if (y == 1 && d == 0) {
			r = 0;
			d = 1;
			x += 1;
			cnt++;
			continue;
		}
		if (d == 1 && x != 1) {
			x -= 1;
			y += 1;
			cnt++;
			continue;
		}
	}
	return 0;
}