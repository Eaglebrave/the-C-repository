#include <bits/stdc++.h>
using namespace std;
#define N 110
char x[10 * N];
int a[N][N], f[N][N], n, m;

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; i++)
		cin >> x[i]/*scanf("%c",&x[i])*/, a[i][i] = x[i] - '0';
	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			a[i][j] = a[i][j - 1] * 10 + x[j] - '0'; //iλ->jλ������
	for (int i = 1; i <= n; i++)
		f[i][0] = a[1][i]; //��ʼ��
	for (int k = 1; k <= m; k++) //ѭ���ָ����
		for (int i = k + 1; i <= n; i++) //�ָ�k��������Ҫk+1λ����
			for (int j = k; j < i; j++) //ѭ���ָ�λ��
				f[i][k] = max(f[i][k], f[j][k - 1] * a[j + 1][i]); //ǰ��*���������
	printf("%d\n", f[n][m]);
	return 0;
}