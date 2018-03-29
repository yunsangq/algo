#include <stdio.h>

int arr[11] = { 0 };

int partition(int s, int e) {
	int m = arr[(s + e) / 2];
	while (s <= e) {
		while (arr[s] < m)s++;
		while (arr[e] > m)e--;

		if (s <= e) {
			int tmp;
			tmp = arr[e];
			arr[e] = arr[s];
			arr[s] = tmp;
			s++;
			e--;
		}
	}
	return s;
}

void qsort(int s, int e) {
	int pivot = partition(s, e);

	if (s < pivot - 1)
		qsort(s, pivot - 1);
	if (e > pivot)
		qsort(pivot, e);
}


int main() {
	char s[15] = { 0 };
	int n = 0;
	fgets(s, 15, stdin);

	for (int i = 0; i < 11; i++) {
		if (s[i] == '\n') {
			n = i - 1;
			break;
		}
		arr[i] = s[i] - '0';
	}

	qsort(0, n);

	for (int i = n; i >= 0; i--) {
		printf("%d", arr[i]);
	}
	printf("\n");
	return 0;
}