#include <bits/stdc++.h>
using namespace std;
struct monkey{
int num;
int next;};
monkey a[1010];
int main()
{int n,k,count=0,remain,kk,cur,pre;
cin>>n>>k;
for(int i=1;i<n;i++)
{a[i].num=i;
a[i].next=i+1;} 
a[n].num=n;
a[n].next=1;
remain=n;
kk=k%remain;
if(kk==0)kk=remain;
cur=1;
pre=n;
while(remain>1)
{count++;
if(count==kk){
	a[pre].next=a[cur].next;
	remain--;
	count=0;
	kk=k%remain;
	if(kk==0)kk=remain;}
	else
	pre=cur;
	cur=a[cur].next;}
	cout<<a[cur].num<<endl;
	return 0;}
