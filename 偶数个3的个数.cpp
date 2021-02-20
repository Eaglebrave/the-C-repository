#include <bits/stdc++.h>
using namespace std;
int main()
{int n,a[1000],b[1000];
cin>>n;
a[1]=8;
b[1]=1;
for(int i=2;i<=n;i++)
{a[i]=(9*a[i-1]+b[i-1])%12345;
b[i]=(9*b[i-1]+a[i-1])%12345;
}
cout<<a[n]<<endl;
return 0;
}
