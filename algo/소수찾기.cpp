#include <stdio.h>

int main() {
	int n, cnt = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int input, check = -1;
		scanf("%d", &input);
		if (input != 1) {
			for (int j = 1; j*j <= input; j++) {
				if (input%j == 0 && j != 1) {
					check = 1;
					break;
				}
				else if (input%j == 0)
					check = 0;
			}
			if (check == 0)
				cnt++;
		}
	}
	printf("%d\n", cnt);

	return 0;
}