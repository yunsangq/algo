#include <stdio.h>
#include <string.h>

int stack[20000] = { 0 };
int idx = 0;

void push(int x) {
	idx++;
	stack[idx] = x;
}

void pop() {
	if (idx > 0) {
		printf("%d\n", stack[idx]);
		stack[idx] = 0;
		idx--;
	}
	else {
		printf("-1\n");
	}
}

void size() {
	printf("%d\n", idx);
}

void empty() {
	if (idx == 0) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}
}

void top() {
	if (idx > 0)
		printf("%d\n", stack[idx]);
	else
		printf("-1\n");
}


int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char s[100] = { 0 };
		scanf("%s", &s);
		if (strcmp(s, "push") == 0) {
			int x = 0;
			scanf("%d", &x);
			push(x);
		}
		else if (strcmp(s, "pop") == 0) {
			pop();
		}
		else if (strcmp(s, "size") == 0) {
			size();
		}
		else if (strcmp(s, "empty") == 0) {
			empty();
		}
		else if (strcmp(s, "top") == 0) {
			top();
		}
	}

	return 0;
}