#include <stdio.h>

int stack[10000] = { 0 };
int top = -1;

void push(int x) {
	top++;
	stack[top] = x;
}

void pop() {
	if (top >= 0) {
		stack[top] = 0;
		top--;
	}
}

int empty() {
	if (top < 0)
		return 1;
	else
		return 0;
}

void clear() {
	top = -1;
	for (int i = 0; i < 10000; i++)stack[i] = 0;
}

int main() {
	int t;
	scanf("%d", &t);
	getchar();
	for (int i = 0; i < t; i++) {
		clear();
		char s[60] = { 0 };
		fgets(s, 60, stdin);

		int vps = 0;
		for (int j = 0; j < 60; j++) {
			if (s[j] == '\n')break;
			if (s[j] == '(') {
				push(1);
			}
			else if (s[j] == ')') {
				if (empty() == 0)
					pop();
				else {
					vps = 1;
				}
			}
		}

		if (empty() == 1 && vps==0)
			printf("YES\n");
		else
			printf("NO\n");

	}


	return 0;
}