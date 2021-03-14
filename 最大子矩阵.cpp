#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define maxn 105
#define inf 0x3f3f3f3f

int n, ans;
int f[maxn][maxn], a[maxn][maxn];

int _max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	scanf("%d", &n);
	ans = -inf;
	int i, j, k, l;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			scanf("%d", &a[i][j]);
			f[i][j] = f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1] + a[i][j];
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			for (k = i; k <= n; k++) {
				for (l = j; l <= n; l++) {
					ans = _max(ans, f[k][l] - f[k][j - 1] - f[i - 1][l] + f[i - 1][j - 1]);
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}