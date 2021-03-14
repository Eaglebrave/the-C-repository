#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main() {
	int i, j, n;
	cin >> n;
	int dp[n + 1], maxs[n + 1];
	memset(maxs, 0, sizeof(maxs));
	for (i = 1; i <= n; i++)
		cin >> dp[i];
	maxs[1] = 1;
	for (i = 2; i <= n; i++) {
		for (j = 1; j < i; j++) {
			if (dp[j] > dp[i])
				maxs[i] = max(maxs[i], maxs[j] + 1);
		}
		if (maxs[i] == 0)
			maxs[i] = 1;
	}
	sort(maxs, maxs + n + 1);
	cout << maxs[n];
}