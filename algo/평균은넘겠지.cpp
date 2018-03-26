#include <stdio.h>

int main() {
	int c;
	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		int n, sum = 0, cnt = 0;
		int s[1005] = { 0, };
		float avg = 0;
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			scanf("%d", &s[j]);
			sum += s[j];
		}
		avg = sum / n;
		for (int j = 0; j < n; j++) {
			if (s[j] > avg) {
				cnt++;
			}
		}
		float a = (float)(cnt) / n;
		printf("%.3f%%\n", a * 100);
	}

	return 0;
}