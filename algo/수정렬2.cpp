#include <stdio.h>
int arr[10000005] = { 0 };

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
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qsort(0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}