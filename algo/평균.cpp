#include <stdio.h>

int main() {
	int n;
	float s[1010] = { 0, };
	float max = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
		if (s[i] >= max) {
			max = s[i];
		}
	}
	float sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (s[i] / max) * 100;
	}
	printf("%.2f", sum / n);

	return 0;
}