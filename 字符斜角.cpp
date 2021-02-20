#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,j,x,y;
char a[20][20],s;
cin>>n;
s='A'-1;
for(i=1;i<=n*2;i++){x=1;y=i;s++;
	for(j=1;j<=i;j++){
		if(s>'A'+n-1)s='A';
		a[x][y]=s;
		x++;
		y--;
	}
}
for(i=1;i<=n;i++){
	for(j=1;j<=n;j++)
	cout<<setw(3)<<a[i][j];
	cout<<endl;
}
}
