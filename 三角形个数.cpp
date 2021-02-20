#include <bits/stdc++.h>
using namespace std;
int main()
{int n,total=0;
cin>>n;
for(int a=1;a<=n-2;a++)
for(int b=a;b<=n-2;b++)
{int c=n-a-b;
if((c>=b)&&(a+b>c))total++;}
cout<<total<<endl;
return 0;
}
