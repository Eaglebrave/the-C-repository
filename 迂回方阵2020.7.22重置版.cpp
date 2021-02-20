#include <bits/stdc++.h>
using namespace std;
int main()
{int a[20][20],n,i,j,x,y,s=0,x1=-1,y1=-1;
cin>>n;
x=n;
y=1;
a[x][y]=s;
for(i=1;i<=n;i++){s++;
	x1++;
	y1++;
	a[x][y]=s;
	for(j=1;j<=x1;j++){
		s++;
		y++;
		a[x][y]=s;
	}
	for(j=1;j<=y1;j++){
		s++;
		x++;
		a[x][y]=s;
	}
	x=n-i;
	y=1;
}
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++)
	cout<<setw(4)<<a[i][j];
	cout<<endl;
}
}
