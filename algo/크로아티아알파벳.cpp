#include <stdio.h>

int main() {
	int cnt = 0;
	char s[105] = { 0 };
	fgets(s, 100, stdin);

	for (int i = 0; i < 100; i++) {
		if (s[i] == '\n')
			break;

		if (s[i] == 'c') {
			if (s[i + 1] == '=') {
				cnt++;
				i += 1;
				continue;
			}
			else if (s[i + 1] == '-') {
				cnt++;
				i += 1;
				continue;
			}
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == 'z') {
				if (s[i + 2] == '=') {
					cnt++;
					i += 2;
					continue;
				}
			}
			else if (s[i + 1] == '-') {
				cnt++;
				i += 1;
				continue;
			}
		}
		else if (s[i] == 'l') {
			if (s[i + 1] == 'j') {
				cnt++;
				i += 1;
				continue;
			}
		}
		else if (s[i] == 'n') {
			if (s[i + 1] == 'j') {
				cnt++;
				i += 1;
				continue;
			}
		}
		else if (s[i] == 's') {
			if (s[i + 1] == '=') {
				cnt++;
				i += 1;
				continue;
			}
		}
		else if (s[i] == 'z') {
			if (s[i + 1] == '=') {
				cnt++;
				i += 1;
				continue;
			}
		}
		cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}