#include<iostream>
using namespace std;
int main(){
int m,n,i,j,t;
bool p[100];
cin>>m>>n;
for(i=0;i<100;i++)p[i]=true;
t=m;
i=0;
j=0;
while(t>0){
i++;
if(i==m+1)i=1;
if(p[i]){
j++;
if(j==n){
cout<<i<<endl;
p[i]=false;j=0;t--;
}
}
}
return 0;
}

