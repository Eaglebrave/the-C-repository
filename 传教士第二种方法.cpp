#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 0;
int vis[50], shift = 21;

void dfs(int d) {
	ans = max(ans, d - 2);
	if (d > m + n)
		return;
	for (int x = 1; x <= d - 1; x++) {
		int y = d - x;
		if (x < 1 || x > n || y < 1 || y > m)
			continue;
		if (vis[x - y + shift])
			continue;
		vis[x - y + shift] = 1;
		dfs(d + 1);
		vis[x - y + shift] = 0;
	}
}

int main() {
	cin >> n >> m;
	dfs(2);
	cout << ans;
	return 0;
}

