#include <bits/stdc++.h>
using namespace std;
int q[1000011];
int main(){
int a,n,x,two,three,rear;
cin>>a>>n;
two=three=rear=1;
q[1]=a;
while(rear!=n){
if(2*q[two]+1>3*q[three]+1){
rear++;
q[rear]=3*q[three]+1;
three++;
}else if(2*q[two]+1<3*q[three]+1){
rear++;
q[rear]=2*q[two]+1;
two++;
}else {
rear++;
q[rear]=3*q[three]+1;
two++;
three++;
}
}
cout<<q[n]<<endl;
return 0;
}
