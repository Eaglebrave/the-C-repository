#include<bits/stdc++.h>
using namespace std;
char s1[10080];
char s2[10080];
int main() {
gets(s1);
gets(s2);
for(int i=0; i<=strlen(s1); i++) {
if(s1[i]>='a'&&s1[i]<='z') s1[i]-=32;
if(s2[i]>='a'&&s2[i]<='z') s2[i]-=32;
}
if(strcmp(s1,s2)==0) {
cout<<"="<<endl;
} else if(strcmp(s1,s2)>0)
cout<<">"<<endl;
else if(strcmp(s1,s2)<0)
cout<<"<"<<endl;
return 0;}
