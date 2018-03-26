#include <stdio.h>

int main() {
	int n;
	char inputs[101] = { 0, };
	scanf("%d", &n);
	scanf("%s", &inputs);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += inputs[i] - '0';
	}
	printf("%d\n", sum);
	return 0;
}