#include <stdio.h>

int main() {
	int m, n;
	scanf("%d", &m);
	scanf("%d", &n);

	int sum = 0, m_min = 20000;
	for (int i = m; i <= n; i++) {
		if (i != 1) {
			int check = -1;
			for (int j = 1; j*j <= i; j++) {
				if (i%j == 0 && j > 1) {
					check = 1;
					break;
				}
				else if (i%j == 0) {
					check = 0;
				}
			}
			if (check == 0) {
				sum += i;
				if (i <= m_min)
					m_min = i;
			}
		}
	}
	if (sum != 0) {
		printf("%d\n", sum);
		printf("%d\n", m_min);
	}
	else
		printf("-1\n");
	return 0;
}