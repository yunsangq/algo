#include <stdio.h>

int stack[200100] = { 0 };
int arr[200100] = { 0 };
int record[200100] = { 0 };
int idx = -1, record_idx = 0;

void push(int x) {
	idx++;
	stack[idx] = x;
	record[record_idx++] = 1;
}

int pop(){
	if (idx >= 0) {
		int val = stack[idx];
		stack[idx] = 0;
		idx--;
		record[record_idx++] = -1;
		return val;
	}
	else {
		return -1;
	}
}

int top() {
	if (idx >= 0)
		return stack[idx];
	else
		return -1;
}

int empty() {
	if (idx < 0)
		return 1;
	else
		return 0;
}

int main() {
	int n, pass = 0, j = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int input;
		scanf("%d", &input);
		arr[input]++;

		while (1) {
			int ety = empty();
			if (ety == 1) {
				if (j > n) {
					pass = 1;
					break;
				}
				push(j);
			}
			else {
				int check = top();
				if (arr[check] > 1) {
					pass = 1;
					break;
				}
				if (check < input) {
					push(j);
				}
				else if (check > input) {
					pop();
				}
				else if(check == input){
					pop();
					break;
				}
			}
			j++;
		}
	}

	if (pass == 1) {
		printf("NO\n");
		return 0;
	}

	for (int i = 0; i < record_idx; i++) {
		if (record[i] == 1)
			printf("+\n");
		else if (record[i] == -1)
			printf("-\n");
	}

	return 0;
}