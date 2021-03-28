#include <bits/stdc++.h>
using namespace std;
int M, N;

int s[100] = {0};

void dfs(int m, int n) {
	if (n == 1) {
		s[n] = m;
		for (int i = N; i > 0; i--)
			cout << s[i] << " ";
		cout << endl;
	} else {
		for (int i = 0; i < m - n - 1; i++) {
			s[n] = i;
			dfs(m - i, n - 1);
		}
	}
	return;
}

int main() {
	int m, n, x = 1;
	cin >> m >> n;
	M = m;
	N = n;
	dfs(m, n);
	return 0;
}