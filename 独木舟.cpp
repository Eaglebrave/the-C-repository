#include <bits/stdc++.h>
using namespace std;
int w, n, cnt, ship[3005], t[30005];

bool cmp(int a, int b) {
	return a > b;
}

void heap1(int x) {
	if (x == 1)
		return;
	int father = x / 2;
	if (ship[x] > ship[father]) {
		swap(ship[x], ship[father]);
		heap1(father);
	}
}

void heap2(int x) {
	int child = x * 2;
	if (child > cnt)
		return;
	if (child + 1 <= cnt && ship[child] < ship[child + 1])
		child++;
	if (ship[x] < ship[child]) {
		swap(ship[x], ship[child]);
		heap2(child);
	}
}

int main() {
	cin >> w >> n;
	fill(ship + 1, ship + 1 + n, w);
	for (int i = 1; i <= n; i++)
		cin >> t[i];
	sort(t + 1, t + 1 + n, cmp);
	int i = 0;
	cnt = 1;
	while (i < n) {
		i++;
		if (ship[1] >= t[i]) {
			if (ship[i] != w)
				ship[1] = 0;
			else
				ship[1] -= t[i];
			heap2(1);
		} else {
			cnt++;
			ship[cnt] -= t[i];
			heap1(cnt);
		}
	}
	cout << cnt << endl;
	return 0;
}
