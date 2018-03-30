#include <cstdio>
long long int memo[90];

long long int fibo(long long int n) {
	if (n <= 1) {
		return n;
	}
	else if (memo[n] != 0) {
		return memo[n];
	}
	else {
		return memo[n] = fibo(n - 1) + fibo(n - 2);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%lld\n", fibo(n));
	return 0;
}