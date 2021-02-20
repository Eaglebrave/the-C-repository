#include <bits/stdc++.h>
using namespace std;
int m,n,b[100],s[100],y[100];
int main()
{cin>>n>>m;
b[0]=n;s[0]=n/m;y[0]=n%m;
cout<<s[0];
if(y[0]!=0)cout<<".";
for(int i=1;i<=100;i++)
{if(y[i-1]==0)break;
b[i]=y[i-1]*10;
s[i]=y[i-1]*10;
s[i]=b[i]/m;
cout<<s[i];
y[i]=b[i]%m;
}
cout<<endl;
}
