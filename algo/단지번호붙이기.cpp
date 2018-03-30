#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int map[27][27] = { 0 };
int visited[27][27] = { 0 };
int cnt = 0;
void dfs(int i, int j) {
	visited[i][j] = 1;
	cnt++;
	if (i - 1 >= 0 && map[i - 1][j] == 1 && visited[i-1][j]!=1) {
		dfs(i - 1, j);
	}
	if (j - 1 >= 0 && map[i][j - 1] == 1 && visited[i][j-1] != 1) {
		dfs(i, j - 1);
	}
	if (j + 1 < n&&map[i][j + 1] == 1 && visited[i][j+1] != 1) {
		dfs(i, j + 1);
	}
	if (i + 1 < n&&map[i + 1][j] == 1 && visited[i + 1][j] != 1) {
		dfs(i + 1, j);
	}
}


int main() {
	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++) {
		char s[30];
		fgets(s, 30, stdin);
		for (int j = 0; j < n; j++) {
			if (s[j] == '\n')break;
			map[i][j] = s[j] - '0';
		}
	}
	vector<int> v;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] != 1 && map[i][j] == 1) {
				dfs(i, j);
				v.push_back(cnt);
				cnt = 0;
			}
		}
	}
	sort(v.begin(), v.end());
	printf("%d\n", v.size());
	for (int i = 0; i < v.size(); i++)
		printf("%d\n", v[i]);

	return 0;
}