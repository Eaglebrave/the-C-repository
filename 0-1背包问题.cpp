#include <bits/stdc++.h>
using namespace std;
int w[20],c[20],b[20];
int main()
{int n,wk;
cin>>n>>wk;
for(int i=1;i<=n;i++)cin>>w[i];
for (int i=1;i<=n;i++)cin>>c[i];
int cmax=0;
for(int i=1;i<=n;i++)b[i]=0;
b[n]=1;
while(b[0]==0){
	int s=0,t=0;
	for(int i=1;i<=n;i++)
	{s+=b[i]*w[i];
	t+=b[i]*c[i];
	if((s<=wk)&&(t>cmax))cmax=t;}
int j=n;
while(b[j]==1)j--;
b[j]++;
for(int i=j+1;i<=n;i++)b[i]=0;}
cout<<cmax<<endl;
return 0;
}
