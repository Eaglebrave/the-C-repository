#include <bits/stdc++.h>
using namespace std;
int n, m, ans;
bool v1[30], v2[30];

void dfs(int x, int y, int sum) {
	ans = max(ans, sum);
	if (y > m || x > n)
		return;
	if (!v1[x - y + 10] && !v2[x + y]) {
		v1[x - y + 10] = 1;
		v2[x + y] = 1;
		if (y == m)
			dfs(x + 1, 1, sum + 1);
		else
			dfs(x, y + 1, sum + 1);
		v1[x - y + 10] = 0;
		v1[x + y] = 0;
	}
	if (y == m)
		dfs(x + 1, 1, sum);
	else
		dfs(x, y + 1, sum);
}

int main() {
	scanf("%d%d", &n, &m);
	dfs(1, 1, 0);
	printf("%d", ans);
	return 0;
}

