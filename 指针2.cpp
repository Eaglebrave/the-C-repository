#include <bits/stdc++.h>
using namespace std;
int main()
{int a[100],n;
cin>>n;
for(int i=0;i<n;i++)cin>>a[i];
int *p=&a[0];
for(int i=0;i<n;i++){
	cout<<*p<<endl;
	p++;}
return 0;}
