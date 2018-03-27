#include <stdio.h>

int main() {
	int s[5] = { 0 };
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &s[i]);
		if (s[i] >= 40) {
			sum += s[i];
		}
		else {
			sum += 40;
		}
	}
	int avg;
	avg = sum / 5;
	printf("%d", avg);


	return 0;
}