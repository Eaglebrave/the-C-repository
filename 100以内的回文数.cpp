#include <bits/stdc++.h>
using namespace std;
int fz(int n)
{int s=0;
while(n)
{s*=10;
s+=n%10;
n/=10;
}
return s;}
int main()
{int i;
for(i=1;i<=100;i++)
if(i==fz(i))cout<<i<<endl;
}
