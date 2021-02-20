#include <bits/stdc++.h>
using namespace std;
int main()
{int n,i,j,k=-1;
char s;
cin>>n;
for(i=n-1;i>=0;i--){
k+=2;
for(j=1;j<=i;j++)
cout<<" ";
s=64;
for(j=1;j<=k;j++){
	s++;
	cout<<s;
}
cout<<endl;
}
}
