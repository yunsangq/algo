#include <stdio.h>

int stack[50] = { 0 };
int idx = -1;

void push(int x) {
	idx++;
	stack[idx] = x;
}

void pop() {
	if (idx >= 0) {
		stack[idx] = 0;
		idx--;
	}
}

int empty() {
	if (idx < 0)
		return 1;
	else
		return 0;
}

int top() {
	if (idx >= 0)
		return stack[idx];
	else
		return -100;
}


int main() {
	char s[40] = { 0 };
	int sum = 0, result = 0;
	int a_depth = 0, b_depth = 0;
	fgets(s, 40, stdin);
	for (int i = 0; i < 40; i++) {
		if (s[i] == '\n' || s[i] == EOF) {
			break;
		}

		if (s[i] == '(') {
			push(2);
			push(-1);
			a_depth++;
		}
		else if (s[i] == '[') {
			push(3);
			push(-2);
			b_depth++;
		}
		else {
			sum = 0;
			if (empty()==0) {
				if (s[i] == ')' && a_depth>0 && top()!=-2) {
					a_depth--;
					while (1) {
						if (top() == -1) {
							pop();
							if (sum == 0)
								sum = 1;
							stack[idx] *= sum;
							break;
						}
						else if (top() == -2) {
							printf("0\n");
							return 0;
						}
						else {
							sum += top();
							pop();
						}
					}
				}
				else if (s[i] == ']' && b_depth>0 && top() != -1) {
					b_depth--;
					while (1) {
						if (top() == -2) {
							pop();
							if (sum == 0)
								sum = 1;
							stack[idx] *= sum;
							break;
						}
						else if (top() == -1) {
							printf("0\n");
							return 0;
						}
						else {
							sum += top();
							pop();
						}
					}
				}
			}
			else {
				printf("0\n");
				return 0;
			}
		}
	}
	
	while (empty() == 0) {
		if (top() > 0) {
			result += top();
			pop();
		}
		else {
			result = 0;
			break;
		}
	}
	printf("%d\n", result);

	return 0;
}