#include <bits/stdc++.h>
using namespace std;
const int N=100010,key=10000;
int a[N];
int main()
{int x,top=1;
char ch;
cin>>a[1];
while(cin>>ch)
{cin>>x;
if(ch=='*')a[top]=(a[top]*x)%key;
if(ch=='+')a[++top]=x;
}
int ans=0;
for(int i=1;i<=top;i++)
ans=(ans+a[i])%key;
cout<<ans<<endl;
return 0;
}
