#include <stdio.h>

int main() {
	int map[40] = { 0 };
	char s[1000005] = { 0 };
	//fgets(s, 1000000, stdin);
	fread(s, 1, 1000000, stdin);
	for (int i = 0; i < 1000000; i++) {
		if (s[i] == '\n')
			break;
		if (s[i] < 97)
			map[s[i] - 'A']++;
		if (s[i] >= 97)
			map[s[i] - 'a']++;
	}
	int _max = 0, cnt = 0, i_max = 0;
	for (int i = 0; i < 26; i++) {
		if (map[i] >= _max)
			_max = map[i];
	}
	for (int i = 0; i < 26; i++) {
		if (map[i] == _max) {
			cnt++;
			i_max = i;
		}
	}
	if (cnt == 1)
		printf("%c\n", i_max + 65);
	else
		printf("?\n");
	return 0;
}