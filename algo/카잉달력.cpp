#include <stdio.h>

int lcm(int x, int y) {
	int q = 1, w = 2;
	while (1) {
		if (w > x&&w > y)
			break;
		if (x%w == 0 && y%w==0) {
			x = x / w;
			y = y / w;
			q *= w;
		}
		w++;
	}
	q *= x;
	q *= y;
	return q;
}

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int m, n, x, y;
		scanf("%d %d %d %d", &m, &n, &x, &y);
		int a = x, b = y, lc = 0;
		lc = lcm(m, n);

		while(a!=b && a<=lc) {
			if (a < b)
				a += m;
			else
				b += n;
		}
		if (a != b)
			printf("-1\n");
		else
			printf("%d\n", a);
	}

	return 0;
}