#include <bits/stdc++.h>
using namespace std;
int main()
{int i,flag=0,k;
double s;
char a[500],b[500];
cin>>s;
cin>>a>>b;
k=strlen(a);
for(i=0;i<k;i++)
if(a[i]==b[i])flag++;
if(flag*1.0/k>=s)cout<<"yes";
else cout<<"no";
return 0;
}
