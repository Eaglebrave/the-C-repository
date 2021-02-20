#include <bits/stdc++.h>
using namespace std;
int main()
{int a[20][20],n,i,j,k,s=0;
cin>>n;
for(i=1;i<=n;i++){
	s++;
	for(j=i;j<=n;j++)
	for(k=i;k<=n;k++)
	a[j][k]=s;
}
for(i=1;i<=n;i++)
{for(j=1;j<=n;j++)
cout<<setw(3)<<a[i][j]; 
cout<<endl;}
return 0;
}
