#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> adj[1001];
bool check1[1001];
bool check2[1001];
queue<int> q;

void dfs(int here) {
	printf("%d ", here);

	check1[here] = true;
	for (int i = 0; i < adj[here].size(); i++) {
		int there = adj[here][i];
		if (!check1[there])
			dfs(there);
	}
}

void bfs(int start) {
	q.push(start);
	check2[start] = true;

	while (!q.empty()) {
		int here = q.front();
		q.pop();
		printf("%d ", here);

		for (int i = 0; i < adj[here].size(); i++) {
			int there = adj[here][i];

			if (!check2[there]) {
				q.push(there);
				check2[there] = true;
			}
		}
	}
}

int main() {
	int n, m, v;
	scanf("%d %d %d", &n, &m, &v);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	for (int i = 0; i < n; i++) {
		sort(adj[i].begin(), adj[i].end());
	}

	dfs(v);
	printf("\n");

	bfs(v);
	printf("\n");
	return 0;
}