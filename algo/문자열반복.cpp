#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	for (int i = 0; i < t; i++) {
		int r;
		char s[30] = { 0 };
		fgets(s, 30, stdin);
		r = s[0] - '0';

		for (int j = 2; j < 30; j++) {
			if (s[j] == '\n') {
				printf("\n");
				break;
			}
			for (int k = 0; k < r; k++) {
				printf("%c", s[j]);
			}

		}

	}

	return 0;
}