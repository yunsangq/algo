#include <stdio.h>

int memo[1001][1001] = { 0 };

int bino(int n, int r) {
	if (r == 0 || n == r)
		return memo[n][r] = 1;
	else if (memo[n][r] != 0) {
		return memo[n][r];
	}
	else {
		return memo[n][r] = (bino(n - 1, r - 1) + bino(n - 1, r)) % 10007;
	}
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d\n", bino(n, k));
	return 0;
}