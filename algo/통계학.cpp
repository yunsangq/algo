#include <stdio.h>

int arr[500001] = { 0 };
int count[8005] = { 0 };

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
	int n, sum = 0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		if (arr[i] < 0)
			count[-arr[i]]++;
		else if (arr[i] == 0)
			count[arr[i]]++;
		else
			count[arr[i] + 4000]++;
	}

	qsort(0, n - 1);

	float a = (float)sum / (float)n;
	printf("%.0f\n", a);
	int b = arr[n / 2];
	printf("%d\n", b);

	int c_max = 0, i_max = 0;
	for (int i = 0; i <= 8000; i++) {
		if (count[i] >= c_max) {
			c_max = count[i];
			i_max = i;
		}
	}
	int check = 0;
	for (int i = 4000; i >= 0; i--) {
		if (count[i] == c_max)
			check++;

		if (check == 2) {
			printf("%d\n", -i);
			break;
		}
	}

	if (check != 2) {
		for (int i = 4001; i <= 8000; i++) {
			if (count[i] == c_max)
				check++;

			if (check == 2) {
				printf("%d\n", i - 4000);
				break;
			}
		}
	}

	if (check == 1) {
		if (i_max>4000)
			printf("%d\n", i_max - 4000);
		else
			printf("%d\n", -i_max);
	}

	printf("%d\n", arr[n - 1] - arr[0]);

	return 0;
}