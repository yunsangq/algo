#include <stdio.h>

int main() {
	int n, cycle = 0;
	scanf("%d", &n);

	int _n = n, a = 0, b = 0;
	
	while (1) {
		int tmp = 0;
		a = _n / 10;
		b = _n % 10;
		tmp = a + b;
		_n = (b%10)*10 + tmp%10;
		cycle++;
		if (_n == n) {
			printf("%d", cycle);
			break;
		}
	}

	return 0;
}