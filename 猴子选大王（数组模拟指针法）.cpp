#include <bits/stdc++.h>
using namespace std;
int a[1010];
int main()
{int n,k,s=0,p,q;
cin>>n>>k;
for(int i=1;i<n;i++)
a[i]=i+1;
a[n]=1;
p=1;
q=n;
while(a[p]!=p){
	s++;
	if(s==k){
		s=0;
		cout<<p<<" ";
		a[q]=a[p];
		p=a[p];
	}
	else{
		q=p;
		p=a[p];
	}
}
cout<<p<<endl;
return 0;
}
