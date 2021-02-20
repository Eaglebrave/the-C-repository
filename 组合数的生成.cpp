#include <bits/stdc++.h>
using namespace std;
int main()
{int n,r,b[100];
cin>>n>>r;
for(int i=1;i<=n;i++)b[i]=i;
b[0]=-1;
while(b[0]==-1)
{for(int i=1;i<=r;i++)cout<<b[i]<<" ";
cout<<endl;
int j=r;
while(b[j]==n-r+j)j--;
b[j]++;
for(int i=j+1;i<=r;i++)b[i]=b[i-1]+1;
}
return 0;
}
