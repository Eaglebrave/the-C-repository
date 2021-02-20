#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,a[5011];
	int *p,*s1,*s2;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	p=&a[0];
	s1=new(int);
	*s1=0;
	s2=new(int);
	*s2=0;
	for(int i=0;i<=n;i++){
		if(*p%2==0)*s1+=*p;
		else *s2+=*p;
		p++;
	}
	cout<<*s2<<endl<<*s1<<endl;
	return 0;}
