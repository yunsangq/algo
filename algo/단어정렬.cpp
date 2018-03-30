#include <stdio.h>
#include <string.h>

char str[20001][55] = { 0 };

int partition(int s, int e) {
	char m[55] = { 0 };
	strcpy(m, str[(s + e) / 2]);

	while (s <= e) {
		while (strlen(str[s]) < strlen(m) || (strlen(str[s]) == strlen(m) && strcmp(str[s],m) < 0) ) s++;
		while (strlen(str[e]) > strlen(m) || (strlen(str[e]) == strlen(m) && strcmp(str[e],m) > 0) ) e--;

		if (s <= e) {
			char tmp[55] = { 0 };
			strcpy(tmp, str[s]);
			strcpy(str[s], str[e]);
			strcpy(str[e], tmp);
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
	getchar();
	for (int i = 0; i < n; i++) {
		fgets(str[i], 55, stdin);
	}
	
	qsort(0, n - 1);

	for (int i = 0; i < n; i++) {
		if (strcmp(str[i], str[i + 1]) != 0)
			printf("%s", str[i]);
	}

	return 0;
}