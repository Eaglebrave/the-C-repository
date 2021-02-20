#include <bits/stdc++.h>
using namespace std;
int main()
{int a,b,*p;
cin>>a>>b;
p=b>a?&a:&b;
cout<<*p*2;}
