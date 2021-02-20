#include <bits/stdc++.h>
using namespace std;
int n,match[65][65];
void makelist(int a1,int b1,int a2,int b2,int x,int y)
{if(x==y)match[a1][b1]=x;
else {int a3=(a1+a2)/2,b3=(b1+b2)/2,xy=(x+y)/2;
makelist(a1,b1,a3,b3,x,xy);
makelist(a1,b3+1,a3,b2,xy+1,y);
makelist(a3+1,b1,a2,b3,xy+1,y);
makelist(a3+1,b3+1,a2,b2,x,xy);
}
}
void printlist(int n)
{for(int i=1;i<=n;i++)
{for(int j=1;j<n;j++)printf("%4d",match[i][j]);
printf("%4d\n",match[i][n]);
}
}
int main()
{cin>>n;
makelist(1,1,n,n,1,n);
printlist(n);
return 0;
}
