#include <bits/stdc++.h>
using namespace std;
int a[11];
int main()
{int *p,i;
int s=0;
p=a;
for(int i=0;i<10;i++){
	cin>>*p;
	p++;
}
p=new(int);
cin>>*p;
for(i=0;i<10;i++)
if(a[i]<=*p+30)s++;
cout<<s<<endl;
return 0;
}
