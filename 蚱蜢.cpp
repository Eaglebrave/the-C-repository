#include <bits/stdc++.h>
using namespace std;
int main()
{string a;
cin>>a;
int ans=0,pre=0;
for(int i=0;i<a.length();i++){
	if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'){if(ans<=(i+1-pre))ans=(i+1-pre);
	pre=i+1;
	}
}
if(ans<=(a.length()+1-pre))ans=a.length()+1-pre;
cout<<ans<<endl;
return 0;
}
