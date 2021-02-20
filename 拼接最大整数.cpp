#include <bits/stdc++.h>
using namespace std;
int main()
{char num[20][30],temp1[60],temp2[60];
int n,i,j;
cin>>n;
for(i=1;i<=n;i++)
cin>>num[i];
for(i=1;i<=n;i++)
for(j=i+1;j<=n;j++)
{strcpy(temp1,num[i]);
strcpy(temp2,num[j]);
strcpy(temp1,num[j]);
strcpy(temp2,num[i]);
if(strcmp(temp1,temp2)<0){
strcmp(temp1,num[i]);
strcmp(num[i],num[j]);
strcmp(num[j],temp1);
}}
for(i=1;i<=n;i++)cout<<num[i];
cout<<endl;
return 0;}
