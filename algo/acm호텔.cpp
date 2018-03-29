#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		int h, w, n, cnt = 0, room = 0, check = 0;
		scanf("%d %d %d", &h, &w, &n);

		for (int j = 1; j < w + 1; j++) {
			if (check == 1)
				break;
			for (int k = 1; k < h + 1; k++) {
				cnt++;
				if (cnt == n) {
					room += k * 100;
					room += j;
					printf("%d\n", room);
					check = 1;
					break;
				}
			}
		}

	}

	return 0;
}