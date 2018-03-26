#include <stdio.h>

int main() {
	int list[8] = { 0 }, dif = 0;
	for (int i = 0; i < 8; i++)
		scanf("%d", &list[i]);

	for (int i = 0; i < 7; i++) {
		if (list[i] - list[i + 1] != 1 && list[i] - list[i + 1] != -1) {
			printf("mixed\n");
			return 0;
		}
		else if (list[i] - list[i + 1] == 1) {
			dif = 1;
		}
		else if(list[i] - list[i + 1] == -1){
			dif = -1;
		}
	}
	if (dif == 1)
		printf("descending\n");
	else
		printf("ascending\n");

	return 0;
}