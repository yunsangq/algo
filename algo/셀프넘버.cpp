#include <stdio.h>

int map[10005] = { 0, };

int d(int n) {
	int a = n;
	a += n % 10;
	for (int i = 10; i < 10001; i*=10) {
		if (n / i == 0) {
			break;
		}
		a += (n%(i*10)) / i;
	}
	return a;
}

int main() {
	for (int i = 1; i <= 10000; i++) {
		map[d(i)] = 1;
	}

	for (int i = 1; i <= 10000; i++) {
		if (map[i] != 1) {
			printf("%d\n", i);
		}
	}
	return 0;
}