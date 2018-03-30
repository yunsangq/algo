#include <cstdio>

long long int arr[50] = { 0 };

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