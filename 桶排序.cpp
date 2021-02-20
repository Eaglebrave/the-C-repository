#include<iostream>
using namespace std;
int main(){
int n,i,j,number,num[1001]={0};
cin>>n;
for(i=1;i<=n;i++)
{cin>>number;
num[number]++;}
for(i=1;i<=1001;i++)
for(j=1;j<=num[i];j++)
cout<<i<<endl;
return 0;}
