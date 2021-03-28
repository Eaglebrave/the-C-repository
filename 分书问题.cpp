#include <bits/stdc++.h>
using namespace std;
char islove[25][25];
bool isused[25];
int n, ans;

void dfs(int t) {
	if (t > n) {
		ans++;
		return;
	}
	bool ok = false;
	for (int i = 1; i <= n; i++)
		if (islove[t][i] == '1' && !isused[i]) {
			ok = true;
			isused[i] = true;
			dfs(t + 1);
			isused[i] = false;
		}
	if (!ok)
		return;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%s", islove[i] + 1);
		dfs(1);
	}
	cout << ans;
	return 0;
}

