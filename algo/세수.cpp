#include <stdio.h>

int main() {
	int arr[3], tmp;
	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (arr[j] >= arr[j+1]) {
				tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("%d\n", arr[1]);
	return 0;
}