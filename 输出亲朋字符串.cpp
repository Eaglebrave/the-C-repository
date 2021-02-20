#include <bits/stdc++.h>
using namespace std;
int main()
{char a[100],z;
int x,y,i;
gets(a);
for(i=0;i<strlen(a)-1;i++)
{x=a[i];
y=a[i+1];
z=x+y;
cout<<z;}
x=a[0];
y=a[strlen(a)-1];
z=x+y;
cout<<z<<endl;
return 0;
}
