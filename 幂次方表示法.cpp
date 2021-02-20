#include <bits/stdc++.h>
using namespace std;
int x,a[32];
void npow(int n){
	for(int i=x;i>=0;--i){
		if(a[i]<=n){
			n=n-a[i];
			if(i>1){
				cout<<"2(";
				npow(i);
				cout<<")";
			}
			if(i==1)cout<<"2";
			if(i==0)cout<<"2(0)";
			if(n!=0)cout<<"+";}}
}
int main()
{int n;
cin>>n;
a[0]=1;
while(a[x]<n){
	x++;
	a[x]=a[x-1]*2;
}
npow(n);
cout<<endl;
return 0;
}
