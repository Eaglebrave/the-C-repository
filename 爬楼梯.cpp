#include <bits/stdc++.h>
using namespace std;
int tj(int s)
{if(s<1) return 1;
if(s==1) return 1;
if(s==2) return 2;
else return tj(s-1)+tj(s-2)+tj(s-3);
}
int main()
{int a=1;
while(1)
{cin>>a;
if(a==0)break;
cout<<tj(a)<<endl;}
}
