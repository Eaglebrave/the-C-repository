#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,i,j;
bool flag;
cin>>n;
cout<<2;
for(i=3;i<=n;i++){
flag=true;
for(j=2;j<=sqrt(i);j++)
if(i%j==0){flag=false;break;}
if(flag)cout<<" "<<i;
}
cout<<endl;
return 0;
}
