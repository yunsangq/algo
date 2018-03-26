#include <stdio.h>

int check(int n) {
	int x[4] = { 0 };
	x[0] = n % 10;
	x[1] = (n % 100) / 10;
	x[2] = (n % 1000) / 100;
	x[3] = (n % 10000) / 1000;
	
	if (n < 1000) {
		int dif = x[0] - x[1];
		for (int i = 0; i < 2; i++) {
			if (x[i] - x[i + 1] != dif)
				return 0;
		}
	}
	else {
		int dif = x[0] - x[1];
		for (int i = 0; i < 3; i++) {
			if (x[i] - x[i + 1] != dif)
				return 0;
		}
	}
	return 1;
}

int main() {
	int n, cnt = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (i < 100)
			cnt++;
		else if (check(i) == 1)
			cnt++;
	}
	printf("%d", cnt);
	return 0;
}