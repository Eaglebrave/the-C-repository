#include<bits/stdc++.h>
using namespace std;
int ans,n;
void f(int last)
{ans++;
for(int i=1;i*i<=last&&i!=last;i++)
f(i);}
int main()
{cin>>n;
f(n);
cout<<ans<<endl;
return 0;}
