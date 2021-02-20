#include <bits/stdc++.h>
using namespace std;
const int N=110;
int a[N][N],stk[N],h[N];
int main()
{int n,top=0,k=0;
cin>>n;
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
cin>>a[i][j];
cout<<1;
h[1]=1;stk[0]=1;
while(top>=0)
{k++;
if(k>n)k=stk[top--];
else if(!h[k]&&a[stk[top]][k]){
	cout<<"-"<<k;
	h[k]=1;
	stk[++top]=k;
	k=0;}
}
return 0;}
