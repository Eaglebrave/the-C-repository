#include <bits/stdc++.h>
using namespace std;
int plt(int);
int main()
{int n;
cin>>n;
cout<<plt(n);
return 0;}
int plt(int n)
{if(n==0)return 1;
if(n==1)return 1;
else return plt(n-2)+plt(n-1);
}
