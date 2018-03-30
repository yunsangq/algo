#include <stdio.h>

int memo[50] = { 0 };

int factory(int n) {
	if (n == 0 || n == 1)
		return memo[n] = 1;
	else if (memo[n] != 0) {
		return memo[n];
	}
	else {
		return memo[n] = n * factory(n - 1);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", factory(n));
	return 0;
}