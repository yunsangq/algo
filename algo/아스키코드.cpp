#include <stdio.h>

int main() {
	char s[2] = { 0 };
	fgets(s, 2, stdin);
	printf("%d\n", s[0]);
	return 0;
}