#include <iostream>
using namespace std;
int main()
{int n,a[101],i,j,b,c;
cin>>n;
for(i=1;i<=n;i++)
cin>>a[i];
b=n;
n--;
for(i=n;i>=1;i--)
{for(j=1;j<=i;j++)
{if(a[j]>a[j+1]){c=a[j+1];
a[j+1]=a[j];
a[j]=c;
}
}
}
for(i=1;i<=b;i++)
cout<<a[i]<<" ";
cout<<endl;
}
