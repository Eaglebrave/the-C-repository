#include "iostream"
#include "cstring"
#include "algorithm"
using namespace std;

int main() {
	char p[201], q[201];
	int dp[201][201];
	while (cin >> p >> q) {
		memset(dp, 0, sizeof(dp));
		int lenP = strlen(p);
		int lenQ = strlen(q);
		for (int i = 0; i < lenP; i++)
			for (int j = 0; j < lenQ; j++) {
				if (p[i] == q[j])
					dp[i + 1][j + 1] = dp[i][j] + 1;
				else
					dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
			}
		cout << dp[lenP][lenQ] << endl;
	}
	return 0;
}