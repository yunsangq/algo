#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		char s[85] = { 0 };
		fgets(s, 85, stdin);

		int cnt = 0, sum = 0;
		for (int j = 0; j < 85; j++) {
			if (s[j] == '\n')
				break;
			if (s[j] == 'X') {
				cnt = 0;
			}
			if (s[j] == 'O') {
				cnt++;
			}
			sum += cnt;
		}
		printf("%d\n", sum);
	}

	return 0;
}