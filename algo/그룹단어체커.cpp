#include <stdio.h>

int main() {
	int n, group_word = 0;
	scanf("%d", &n);
	getchar();

	for (int i = 0; i < n; i++) {
		int map[30] = { 0 }, tmp;
		char s[105] = { 0 };
		fgets(s, 100, stdin);

		for (int j = 0; j < 100; j++) {
			if (s[j] == '\n') {
				group_word++;
				break;
			}
			if (j == 0) {
				tmp = s[j] - 'a';
				map[s[j] - 'a'] = 1;
				continue;
			}
			if (tmp == s[j] - 'a') {
				tmp = s[j] - 'a';
				continue;
			}
			if (tmp != s[j] - 'a' && map[s[j] - 'a'] != 0) {
				break;
			}
			tmp = s[j] - 'a';
			map[s[j] - 'a'] = 1;

		}
	}

	printf("%d\n", group_word);


	return 0;
}