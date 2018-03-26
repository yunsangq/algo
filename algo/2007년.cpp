#include <stdio.h>

int main() {
	int x, y;
	int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int sum = 0;
	char d[7][4] = {
		{"MON"},
		{"TUE"},
		{"WED"},
		{"THU"},
		{"FRI"},
		{"SAT"},
		{"SUN"}
	};
	scanf("%d %d", &x, &y);
	for (int i = 0; i < x-1; i++) {
		if (x-1 >= 1) {
			sum += days[i];
		}
	}
	sum += y - 1;
	printf("%s\n", d[sum % 7]);

	return 0;
}