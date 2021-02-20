#include <bits/stdc++.h>
using namespace std;
struct node{
	int num;
	node *pre,*next;};
int main()
{int n,m,d,s;
node *head,*tail,*p,*q,*r;
cin>>n>>m;
head=new node;
head->next=NULL;
head->pre=NULL;
head->num=1;
q=head;
for(int i=2;i<=n;i++)
{p=new node;
p->next=NULL;
p->pre=NULL;
p->num=i;
q->next=p;
p->pre=q;
q=p;}
tail=q;
p=head;
s=0;
d=1;
while(head!=tail)
{s++;
if(s==m){s=0;
if(p==tail){tail=p->pre;
p=tail;
d=2;
continue;}
if(p==head){head=p->next;
p=head;
d=1;
continue;}
p->pre->next=p->next;
p->next->pre=p->pre;}
if(d==1){if(p==tail){p=p->pre;
d=2;}
else p=p->next;}
else{if(p==head){p=p->next;
d=1;}
else p=p->pre;}}
cout<<head->num<<endl;
return 0;}
