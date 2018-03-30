#include <stdio.h>

int queue[101] = { 0 };
int f = 1, b = 1;
int n, m;

void push(int x) {
	if (b > n) {
		b = 0;
	}
	b++;
	queue[b] = x;
}

int pop() {
	if (f == b)
		return -1;
	else {
		int tmp = queue[f];
		queue[f] = 0;
		f++;
		if (f > n)
			f = 1;
		return tmp;
	}
}

int empty() {
	if (f == b)
		return 1;
	else
		return 0;
}

int front() {
	if (f == b)
		return -1;
	else
		return queue[f];
}


int main() {
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		n = 0, m = 0;
		int ori[101] = { 0 };
		scanf("%d %d", &n, &m);
		for (int j = 0; j < n; j++) {
			scanf("%d", &ori[j]);
			push(ori[j]);
		}


		while (1) {
			int now = front();
			for(int l=)
		}

	}

	return 0;
}