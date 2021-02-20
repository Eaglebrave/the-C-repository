#include <bits/stdc++.h>
using namespace std;
int n,MAX=0;
char maxname[20];
struct student{
	int num;
	char name[20];
}a[100];
int main()
{cin>>n;
for(int i=0;i<n;i++)
{cin>>a[i].num>>a[i].name;
if(a[i].num>MAX){MAX=a[i].num;
strcpy(maxname,a[i].name);
}
}
cout<<maxname;
}
