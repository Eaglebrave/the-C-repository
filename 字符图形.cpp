#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,j,k,s=-1;
cin>>n;
for(i=n-1;i>=0;i--){
	s+=2;
	for(j=1;j<=i;j++)
	cout<<" ";
	for(j=1;j<=s;j++)
	cout<<"*";
	cout<<endl;
}
}
