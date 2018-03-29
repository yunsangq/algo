#include <stdio.h>
int map[247000] = { 0 };

int main() {
	for (int i = 2; i <= 247000; i++) {
		int check = -1;
		
		for (int j = 1; j*j <= i; j++) {
			if (i%j == 0 && j > 1) {
				check = 1;
				break;
			}
			else if (i%j == 0)
				check = 0;
		}
		if (check == 0)
			map[i] = 1;
	}

	while (1) {
		int input, cnt = 0;
		scanf("%d", &input);

		if (input == 0)
			break;

		for (int i = input + 1; i <= input * 2; i++) {
			if (map[i] == 1)
				cnt++;
		}
		printf("%d\n", cnt);
	}


	return 0;
}