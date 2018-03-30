#include <stdio.h>
#include <string.h>

int queue[1010000] = { 0 };
int f = 0, b = 0;

void push(int x) {
	queue[b++] = x;
}

int pop() {
	if (f < b) {
		int tmp = queue[f];
		queue[f] = 0;
		f++;
		if (tmp != 0)
			return tmp;
		else
			return -1;
	}
	else {
		return -1;
	}
}

int size() {	
	if (b >= f)
		return b - f;
	else
		return 0;
}

int empty() {
	if (f == b)
		return 1;
	else
		return 0;
}

int front() {
	if (b == f)
		return -1;
	else
		return queue[f];
}

int back() {
	if (b == f)
		return -1;
	else
		return queue[b - 1];
}


int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char s[10] = { 0 };
		int x;
		scanf("%s", &s);
		
		if (strcmp(s, "push") == 0) {
			scanf("%d", &x);
			push(x);
		}
		else if (strcmp(s, "pop") == 0) {
			printf("%d\n", pop());
		}
		else if (strcmp(s, "size") == 0) {
			printf("%d\n", size());
		}
		else if (strcmp(s, "empty") == 0) {
			printf("%d\n", empty());
		}
		else if (strcmp(s, "front") == 0) {
			printf("%d\n", front());
		}
		else if (strcmp(s, "back") == 0) {
			printf("%d\n", back());
		}
	}


	return 0;
}