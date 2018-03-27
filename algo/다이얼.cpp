#include <stdio.h>

int main() {
	int map[26] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	char s[20] = { 0 };
	fgets(s, 20, stdin);

	int sum = 0;
	for (int i = 0; i < 20; i++) {
		if (s[i] == '\n')
			break;
		sum += map[s[i] - 'A'];
	}
	printf("%d\n", sum);
	return 0;
}