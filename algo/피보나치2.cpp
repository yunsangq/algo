#include <cstdio>
/*
long long int arr[91] = { 0 };

void fibo(long long int n) {
	arr[n] = arr[n - 1] + arr[n - 2];
}

int main() {
	arr[0] = 0;
	arr[1] = 1;

	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		fibo(i);
	}
	printf("%lld\n", arr[n]);
	return 0;
}

*/

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