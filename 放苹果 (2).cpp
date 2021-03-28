#include <bits/stdc++.h>
using namespace std;
int a[11][11], n, m, t;

void init() {
	for (int i = 1; i <= 10; i++)
		a[0][i] = 1, a[i][1] = 1;
	for (int i = 1; i < 11; i++)
		for (int j = 2; j <= 11; j++)
			if (i >= j)
				a[i][j] = a[i][j - 1] + a[i - j][j];
			else
				a[i][j] = a[i][j - 1];
}

int main() {
	init();
	scanf("%d", &t);
	while (t--) {
		scanf("%d%d", &n, &m);
		printf("%d\n", a[n][m]);
	}
	return 0;
}