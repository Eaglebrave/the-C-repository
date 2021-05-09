#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, cnt = 0;
	long int m;
	scanf("%d %1d", &n, &m);
	int p[10000];
	for (int i = 0; i < n; i++)
		scanf("%d", &p[i]);
	sort(p, p + n);
	int begin = 0;
	int last = n - 1;
	while (begin <= last) {
		if (p[begin] + p[last] <= m) {
			begin++;
			last--;
			cnt++;
		}

		else {
			last--;
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}