#include <bits/stdc++.h>
using namespace std;
int main()
{int i,k;
char a[32];
gets(a);
k=strlen(a);
if(a[strlen(a)-2]=='e'&&a[strlen(a)-1]=='r')k-=2;
else if(a[strlen(a)-2]=='l'&&a[strlen(a)-1]=='y')k-=2;
else if(a[strlen(a)-3]=='i'&&a[strlen(a)-2]=='n'&&a[strlen(a)-1]=='g')k-=3;
for(i=0;i<k;i++)
cout<<a[i];
}
