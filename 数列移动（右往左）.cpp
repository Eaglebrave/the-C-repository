#include <iostream>
#include <iomanip>
using namespace std;
int main()
{int a[5][5],i,j,k=0,b;
for(i=1;i<=4;i++){
for(j=1;j<=4;j++)
{k++;
a[i][j]=k;
}
}
for(i=1;i<=4;i++)
{b=a[i][4];
for(j=4;j>=2;j--)
{a[i][j]=a[i][j-1];
}
a[i][1]=b;
}
for(i=1;i<=4;i++){
for(j=1;j<=4;j++)
{cout<<setw(2)<<a[i][j]<<" ";;
}
cout<<endl;
}
return 0;
}
