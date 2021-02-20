#include <bits/stdc++.h>
using namespace std;
const int N=110;
int a[N][N],q[N],h[N];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	for(int j=1;j<=n;j++)
	cin>>a[i][j];
	cout<<1;
	q[1]=1;h[1]=1;
	for(int l=1,r=1;l<=r;l++){
		int u=q[l];
		for(int i=1;i<=n;i++)
		if(a[u][i]&&!h[i]){
			cout<<"-"<<i;
			q[++r]=i;
			h[i]=1;
		}
	}
return 0;
}
