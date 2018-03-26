#include <stdio.h>
/*
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}
*/

char buffer[1000100];
char obuffer[1000100];


int main() {
	int A = 0, B = 0, state = 0;
	char ob[6]; int obp;
	int p = 0, lim = fread(buffer, 1, sizeof(buffer), stdin);
	while (1) {
		if ('0' <= buffer[p] && buffer[p] <= '9') ++p;
		else break;
	}

	return 0;
}