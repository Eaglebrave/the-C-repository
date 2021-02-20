#include <bits/stdc++.h>
using namespace std;
int ys(int n,int s)
{if(n%s==0)return s;
else return ys(n,s-1);}
int main()
{int n;
cin>>n;
cout<<ys(n,n-1)<<endl;
}
