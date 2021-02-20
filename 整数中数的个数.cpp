#include <bits/stdc++.h>
using namespace std;
int main()
{int a[100],m,n,flag=0,i;
cin>>n;
for(i=0;i<n;i++)
cin>>a[i];
cin>>m;
for(i=0;i<n;i++)
{if(a[i]==m)flag++;
}
cout<<flag;
return 0;
}
