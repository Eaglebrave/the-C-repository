#include <bits/stdc++.h>
using namespace std;
int main()
{int i;
char a[30],x,y;
cin>>a>>x>>y;
for(i=0;i<strlen(a);i++)
if(a[i]==x)a[i]=y;
puts(a);
}
