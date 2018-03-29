#include <stdio.h>

void f(int x) {
	int check = -1;
	for (int i = 1; i*i <= x; i++) {
		if (x%i == 0 && i > 1) {
			check = 1;
			break;
		}
		else if (x%i == 0) {
			check = 0;
		}
	}
	if (check == 0)
		printf("%d\n", x);
}

int main() {
	int m, n;
	scanf("%d %d", &m, &n);

	for (int i = m; i <= n; i++) {
		if (i != 1) {
			f(i);
		}
	}
	
	return 0;
}