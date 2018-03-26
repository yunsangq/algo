#include <stdio.h>

int main() {
	char s[101] = { 0, };
	scanf("%s", &s);
	for (int i = 0; i < 101; i++) {
		if (s[i] == '\0') {
			printf("\n");
			break;
		}
		printf("%c", s[i]);
		if (i != 0 && (i + 1) % 10 == 0) {
			printf("\n");
		}
	}

	return 0;
}