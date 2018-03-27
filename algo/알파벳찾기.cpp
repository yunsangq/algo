#include <stdio.h>

int main() {
	int map[30] = { 0 };
	char s[105] = { 0 };
	fgets(s, 100, stdin);

	for (int i = 0; i < 30; i++)
		map[i] = -1;

	for (int i = 0; i < 100; i++) {
		if (s[i] == '\n')
			break;
		if (map[s[i] - 'a'] == -1)
			map[s[i] - 'a'] = i;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", map[i]);
	}
	return 0;
}