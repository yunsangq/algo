#include <stdio.h>

int main() {
	int map[11] = { 0 }, m_max = 0;
	char s[1000005] = { 0 };
	fgets(s, 1000000, stdin);

	for (int i = 0; i < 1000000; i++) {
		if (s[i] == '\n')
			break;

		if (s[i] - '0' == 6 && map[6] > map[9])
			map[9]++;
		else if (s[i] - '0' == 9 && map[9] > map[6])
			map[6]++;
		else
			map[s[i] - '0']++;
	}
	
	for (int i = 0; i < 10; i++) {
		if (map[i]>=m_max) {
			m_max = map[i];
		}
	}
	printf("%d\n", m_max);

	return 0;
}