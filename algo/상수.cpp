#include <stdio.h>

int main() {
	char s[10] = { 0 }, a[4] = { 0 }, b[4] = { 0 };
	int _a = 0, _b = 0;
	fgets(s, 10, stdin);

	for (int i = 6; i >= 0; i--) {
		if (i < 3) {
			a[2 - i] = s[i];
		}
		else if (i > 3) {
			b[6 - i] = s[i];
		}
	}
	int mul = 100;
	for (int i = 0; i < 3; i++) {
		_a += (a[i]-'0') * mul;
		_b += (b[i]-'0') * mul;
		mul /= 10;
	}
	if (_a >= _b)
		printf("%d\n", _a);
	else
		printf("%d\n", _b);
	return 0;
}