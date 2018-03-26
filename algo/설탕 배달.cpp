#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int n1 = N;
	int x = 0, y = 0, sum = 0;

	while (1) {
		if (n1 == 0) {
			sum = x + y;
			break;
		}
		else if (n1 < 3) {
			sum = -1;
			break;
		}

		if ((n1 - 5)%3 != 0) {
			n1 = n1 - 5;
			x++;
		}
		else if((n1-5)%3==0) {
			n1 = n1 - 5;
			x++;
			if (n1 % 5 == 0) {
				x += n1 / 5;
				n1 = n1 % 5;
			}
			else {
				y = n1 / 3;
				n1 = n1 % 3;
			}
		}
	}

	int n2 = N;
	int x1 = 0, y1 = 0, sum1 = 0;

	while (1) {
		if (n2 == 0) {
			sum1 = x1 + y1;
			break;
		}
		else if (n2 < 3) {
			sum1 = -1;
			break;
		}

		if ((n2 - 3) % 5 != 0) {
			n2 = n2 - 3;
			x1++;
		}
		else if ((n2-3) % 5 == 0) {
			n2 = n2 - 3;
			x1++;
			y1 = n2 / 5;
			n2 = n2 % 5;
		}
	}

	if (sum == -1 && sum1 == -1) {
		printf("%d", -1);
	}
	else if (sum != -1 && sum1 != -1) {
		if (sum<=sum1) {
			printf("%d", sum);
		}
		else if (sum>=sum1) {
			printf("%d", sum1);
		}
	}
	else {
		if (sum != -1) {
			printf("%d", sum);
		}
		else if (sum1 != -1) {
			printf("%d", sum1);
		}
	}

	return 0;
}