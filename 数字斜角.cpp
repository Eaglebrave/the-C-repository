#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,j,x,y,s,a[20][20]={0};
cin>>n;
s=0;
for(i=n;i>0;i--){x=i;y=1;s++;
	for(j=i;j<=n;j++){
		if(s>n)s=1;
		a[x][y]=s;
		x++;
		y++;
	}
}
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++){
		if(a[i][j]==0)a[i][j]=a[j][i];
	}
}
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++)
	cout<<setw(3)<<a[i][j];
	cout<<endl;
}
}
