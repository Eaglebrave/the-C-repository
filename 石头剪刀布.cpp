#include <bits/stdc++.h>
using namespace std;
int main()
{int n,NA,NB,na[100],nb[100],i,j,a=0,ab=0,b=0;
cin>>n>>NA>>NB;
for(i=0;i<NA;i++)
cin>>na[i];
for(i=0;i<NB;i++)
cin>>nb[i];
for(i=0;i<n;i++)
{if(na[i%NA]==0){if(nb[i%NB]==0)ab++;
else if(nb[i%NB]==2)a++;
else b++;}
else if(na[i%NA]==2){if(nb[i%NB]==0)b++;
else if(nb[i%NB]==2)ab++;
else a++;}
else {if(nb[i%NB]==0)a++;
else if(nb[i%NB]==2)b++;
else ab++;}
}
if(a>b)cout<<"A";
if(b>a)cout<<"B";
if(a==b)cout<<"draw";
return 0;
}
