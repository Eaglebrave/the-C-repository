#include <bits/stdc++.h>
using namespace std;
struct node{
	int num;
	node *next;};
int main()
{int n,x;
node *head,*p,*q,*r;
cin>>n;
head=new node;
head->next=NULL;
cin>>head->num;
q=head;
for(int i=2;i<=n;i++)
{p=new node;
p->next=NULL;
cin>>p->num;
q->next=p;
q=p;}
cin>>x;
p=head;
while(p!=NULL)
{if(p->num>=x)break;
q=p;
p=p->next;}
r=new node;
r->num=x;
r->next=NULL;
if(p==head){r->next=head;
head=r;}
else if(p==NULL)q->next=r;
else{q->next=r;
r->next=p;}
p=head;
while(p->next!=NULL)
{cout<<p->num<<" ";
p=p->next;}
cout<<p->num<<endl;
return 0;}
