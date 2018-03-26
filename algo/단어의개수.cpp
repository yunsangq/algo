#include <stdio.h>

int main() {
	int word = 0, cnt = 0, whitesp = 0;
	char s[1000005] = { 0 };
	fgets(s, 1000004, stdin);

	for (int i = 0; i < 1000004; i++) {
		if (cnt == 0 && s[i] == '\0')
			break;
		if (cnt==0 && s[i] != '\n' && s[i] != ' ') {
			cnt = 1;
		}
		if (cnt == 1) {
			if (s[i] == '\n') {
				if (whitesp == 0)
					word++;
				break;
			}
			if (s[i] == '\0') {
				if (whitesp < 2)
					word++;
				break;
			}
			else if (s[i] == ' ') {
				whitesp++;
				if (whitesp < 2)
					word++;
			}
			else {
				if (whitesp < 2)
					whitesp = 0;
			}
		}
	}
	printf("%d\n", word);
	return 0;
}