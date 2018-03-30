#include <stdio.h>

int MAX(int a,int b) {
	return a > b ? a : b;
}

int main() {
	int n, map[302] = { 0 }, dp[302] = { 0 };
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		scanf("%d", &map[i]);
	}
	dp[1] = map[1];
	dp[2] = MAX(map[1] + map[2], map[2]);
	dp[3] = MAX(map[1] + map[3], map[2] + map[3]);
	for (int i = 4; i <= n; i++) {
		dp[i] = MAX(dp[i - 3] + map[i - 1] + map[i], dp[i - 2] + map[i]);
	}
	printf("%d\n", dp[n]);
	return 0;
}