#include <bits/stdc++.h>
using namespace std;
int n, total;

struct num {
	int t, b;
} a[1001];

bool cmp(num x, num y) {
	return x.t < y.t;
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].t;
		a[i].b = i;
	}
	sort(a + 1, a + n + 1, cmp);
	for (int i = 1; i < n; i++) {
		cout << a[i].b << " ";
		total += a[i].t * (n - 1);
	}
	cout << a[n].b << endl;
	cout << fixed << setprecision(2) << total * 1.0 / n << endl;
	return 0;
}

