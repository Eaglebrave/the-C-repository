#include <bits/stdc++.h>
using namespace std;
const int MAXN = 5000;
const int INF = 1 << 30;

int n, s, t, P, M, F, N, S, need[MAXN];
int tot = 1, front[MAXN];
int ansflow = 0, anscost = 0, dis[MAXN], pre[MAXN], flow[MAXN];
bool inq[MAXN];

struct tEdge {
	int v, w, next, c, f;
	inline void addEdge(int tmpu, int tmpv, int tmpc, int tmpw) {
		w = tmpw;
		v = tmpv;
		c = tmpc;
		f = 0;
		next = front[tmpu];
		front[tmpu] = tot;
	}
} e[MAXN * MAXN * 2];

bool spfa() {
	queue <int> q;
	bool b = false;
	memset(inq, false, sizeof(inq));
	memset(flow, 0, sizeof(flow));
	memset(pre, 0, sizeof(pre));
	for (int i = 1; i <= 2 * n + 2; i++)
		dis[i] = INF;
	dis[s] = 0;
	flow[s] = INF;
	inq[s] = true;
	q.push(s);

	while (!q.empty()) {
		int u = q.front();
		q.pop();
		inq[u] = false;

		for (int i = front[u]; i > 0; i = e[i].next) {
			int v = e[i].v, w = e[i].w, maxflow = e[i].c - e[i].f;

			if (maxflow <= 0)
				continue;
			if (dis[v] <= dis[u] + w)
				continue;

			dis[v] = dis[u] + w;
			pre[v] = i;
			flow[v] = min(flow[u], maxflow);

			if (inq[v] == true)
				continue;
			inq[v] = true;
			q.push(v);
			if (v == t)
				b = true;
		}
	}

	return b;
}

void kp() {
	while (spfa() == true) {
		int k = t, curflow = flow[t], curcost = dis[t];

		while (k != s) {
			e[pre[k]].f += curflow;
			e[pre[k] ^ 1].f -= curflow;
			k = e[pre[k] ^ 1].v;
		}

		ansflow += curflow;
		anscost += curflow * curcost;
	}
}

int main() {
	scanf("%d%d%d%d%d%d", &n, &P, &M, &F, &N, &S);
	s = n * 2 + 1;
	t = n * 2 + 2; //1~n:每天的新纸巾 n+1~2n:每天的旧纸巾

	for (int i = 1; i <= n; i++)
		scanf("%d", &need[i]);
	for (int i = 1; i <= n; i++) {
		e[++tot].addEdge(s, i, INF, P);
		e[++tot].addEdge(i, s, 0, -P);
		e[++tot].addEdge(i, t, need[i], 0);
		e[++tot].addEdge(t, i, 0, 0);

		e[++tot].addEdge(s, i + n, need[i], 0);
		e[++tot].addEdge(i + n, s, 0, 0);

		if (i + 1 <= n) {
			e[++tot].addEdge(i + n, i + n + 1, INF, 0);
			e[++tot].addEdge(i + n + 1, i + n, 0, 0);
		}
		if (i + M <= n) {
			e[++tot].addEdge(i + n, i + M, INF, F);
			e[++tot].addEdge(i + M, i + n, 0, -F);
		}
		if (i + N <= n) {
			e[++tot].addEdge(i + n, i + N, INF, S);
			e[++tot].addEdge(i + N, i + n, 0, -S);
		}
	}

	kp();

	printf("%d\n", anscost);

	return 0;
}