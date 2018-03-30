#include <cstdio>
#include <vector>
#include <queue>
using namespace std;

int map[105][105] = { 0 };
int visited[105][105] = { 0 };
int n, m;
queue<pair<int, int> > q;

void bfs(int i, int j) {
	q.push(make_pair(i, j));
	visited[i][j] = 1;

	while (!q.empty()) {
		pair<int, int> here = q.front();
		q.pop();
		int _i = here.first, _j = here.second;

		if (_i - 1 >= 0 && map[_i - 1][_j] == 1 && visited[_i - 1][_j] == 0) {
			q.push(make_pair(_i - 1, _j));
			visited[_i - 1][_j] = visited[_i][_j] + 1;
		}
		if (_j - 1 >= 0 && map[_i][_j - 1] == 1 && visited[_i][_j - 1] == 0) {
			q.push(make_pair(_i, _j-1));
			visited[_i][_j-1] = visited[_i][_j] + 1;
		}
		if (_j + 1 < m&&map[_i][_j + 1] == 1 && visited[_i][_j + 1] == 0) {
			q.push(make_pair(_i, _j + 1));
			visited[_i][_j + 1] = visited[_i][_j] + 1;
		}
		if (_i + 1 < n&&map[_i + 1][_j] == 1 && visited[_i + 1][_j] == 0) {
			q.push(make_pair(_i + 1, _j));
			visited[_i + 1][_j] = visited[_i][_j] + 1;
		}
	}

}

int main() {
	scanf("%d %d", &n, &m);
	getchar();
	for (int i = 0; i < n; i++) {
		char s[105];
		fgets(s, 105, stdin);
		for (int j = 0; j < m; j++) {
			if (s[j] == '\n')break;
			map[i][j] = s[j] - '0';
		}
	}
	bfs(0, 0);
	printf("%d\n", visited[n - 1][m - 1]);
	return 0;
}