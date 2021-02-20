#include <bits/stdc++.h>
using namespace std;
int a[2231],n,s=0,i,j;
int main(){
	cin>>n;
	n-=4;
	a[0]=6,a[1]=2,a[2]=5,a[3]=5,a[4]=4,a[5]=5,a[6]=6,a[7]=3,a[8]=7,a[9]=6;
	for(i=10;i<=2230;i++)
	a[i]=a[i/10]+a[i%10];
	for(i=0;i<=1111;i++)
	for(j=0;j<=1111;j++)
	if(a[i]+a[j]+a[i+j]==n)s++;
cout<<s;}
