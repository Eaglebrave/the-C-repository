#include <bits/stdc++.h>
using namespace std;
int main()
{int i,n;
char Player1[8],Player2[8];
cin>>n;
for(i=1;i<=n;i++)
{cin>>Player1>>Player2;
if(strcmp(Player1,"Rock")==0&&strcmp(Player2,"Rock")==0)cout<<"Tie"<<endl;
if(strcmp(Player1,"Rock")==0&&strcmp(Player2,"Scissors")==0)cout<<"Player1"<<endl;
if(strcmp(Player1,"Rock")==0&&strcmp(Player2,"Paper")==0)cout<<"Player2"<<endl;
if(strcmp(Player1,"Scissors")==0&&strcmp(Player2,"Rock")==0)cout<<"Player2"<<endl;
if(strcmp(Player1,"Scissors")==0&&strcmp(Player2,"Scissors")==0)cout<<"Tie"<<endl;
if(strcmp(Player1,"Scissors")==0&&strcmp(Player2,"Paper")==0)cout<<"Player1"<<endl;
if(strcmp(Player1,"Paper")==0&&strcmp(Player2,"Rock")==0)cout<<"Player1"<<endl;
if(strcmp(Player1,"Paper")==0&&strcmp(Player2,"Scissors")==0)cout<<"Player2"<<endl;
if(strcmp(Player1,"Paper")==0&&strcmp(Player2,"Paper")==0)cout<<"Tie"<<endl;
}
return 0;
}
