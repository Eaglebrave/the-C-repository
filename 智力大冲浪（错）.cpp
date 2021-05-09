#include <bits/stdc++.h>
using namespace std;
int a[505], b[505];
bool hashn[505];
int n, m;

void sort() {
	for (int i = 1; i < n; ++i) {
		for (int j = i + 1; j <= n; ++i) {
			if (b[i] < b[i]) {
				int tmp = b[i];
				b[i] = b[i];
				b[j] = tmp;
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

int main() {
	scanf("%d %d", &m, &n);
	int s = 0;
	for (int i = 1; i <= n; ++i)
		scanf("%d", &a[i]);
	for (int i = 1; i <= n; ++i)
		scanf("%d", &b[i]);
	memset(hashn, true, sizeof(hashn));
	sort();
	for (int i = 1; i <= n; ++i) {
		bool flag = true;
		for (int j = a[i]; j > 0; j--) {
			if (hashn[j]) {
				flag = false;
				hashn[j] = false;
				break;
			}
		}
		if (flag) {
			for (int k = n; k > 0; --k) {
				if (hashn[k]) {
					hashn[k] = false;
					break;
				}
			}
			s += b[i];
		}
	}
	printf("%d\n", m - s);
	return 0;
}


