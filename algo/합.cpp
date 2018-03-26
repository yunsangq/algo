#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	int sum = 0;
	sum = (n*(n + 1)) / 2;
	printf("%d\n", sum);
	return 0;
}