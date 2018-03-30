#include <stdio.h>

int n, dp[1000005] = { 0 };

int MIN(int a, int b) {
	return a > b ? b : a;
}

int main() {
	scanf("%d", &n);
	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) {
			dp[i] = MIN(dp[i / 3] + 1, dp[i]);
		}
		else if (i % 2 == 0) {
			dp[i] = MIN(dp[i / 2] + 1, dp[i]);
		}
	}
	printf("%d\n", dp[n]);

	return 0;
}