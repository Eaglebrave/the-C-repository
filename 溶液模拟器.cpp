#include <bits/stdc++.h>
using namespace std;
const int N=10010;
struct node{
	int w;
	double c;
}a[N];
int main(){
	int v,n,c,top=1;
	cin>>v>>c>>n;
	a[top].w=v,a[top].c=c;
	while(n--){
		char ch;
		cin>>ch;
		if(ch=='Z'&&top>1)top--;
		if(ch=='P'){
			cin>>v>>c;
			top++;
			a[top].w=a[top-1].w+v;
			a[top].c=(a[top-1].w*a[top-1].c+v*c)/(double)a[top].w;
		}
		cout<<a[top].w<<" ";
		cout<<fixed<<setprecision(5)<<a[top].c<<endl;
	}
}
