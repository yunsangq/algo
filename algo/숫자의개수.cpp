#include <stdio.h>

int main() {
	int num_cnt[10] = { 0 };
	long long int a, b, c, mul;
	scanf("%lld", &a);
	scanf("%lld", &b);
	scanf("%lld", &c);

	mul = a * b * c;
	num_cnt[mul%10]++;
	for (int i = 10; i < 1000000000; i *= 10) {
		if (mul / i == 0)
			break;
		num_cnt[mul % (i * 10) / i]++;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d\n", num_cnt[i]);
	}

	return 0;
}