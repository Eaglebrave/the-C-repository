#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int a[1010], f[1010], n, maxn;

int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		f[i] = 1;
	}

	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= i - 1; j++)
			if (a[i] > a[j])
				f[i] = max(f[j] + 1, f[i]);
	for (int i = 1; i <= n; i++)
		maxn = maxn > f[i] ? maxn : f[i];
	printf("%d", maxn);
	return 0;
}