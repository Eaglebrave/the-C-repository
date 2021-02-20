#include <bits/stdc++.h>
using namespace std;
bool isNumber(char ch)
{return ch>='0'&&ch<='9';
}
bool isLetter(char ch)
{return ch>='a'&&ch<='z';
}
void print(char ch,int p1,int p2)
{for(int k=0;k<p2;k++){
	if(p1==3)cout<<"*";
	else if(isNumber(ch)||p1==1)cout<<ch;
	else cout<<(char)(ch-32);}}
int main()
{int p1,p2,p3,i,j;
char left,right;
string s;
cin>>p1>>p2>>p3>>s;
int size=s.size();
for(i=0;i<size;i++){
if(s[i]=='-'){
left=s[i-1];
right=s[i+1];
if(left>=right||!((isNumber(left)&&isNumber(right))
||(isLetter(left)&&isLetter(right))))cout<<"-";
else if(left+1<right){
if(p3==1){
for(j=left+1;j<right;j++)
print(j,p1,p2);
}
else{
for(j=right-1;j>left;j--)
print(j,p1,p2);
}}}
else{cout<<s[i];}}
}
