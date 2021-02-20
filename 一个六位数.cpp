#include <bits/stdc++.h>
using namespace std;
int dh(int i,int j,int k,int l,int m)
{return 7*100000+i*10000+j*1000+k*100+l*10+m;
}
int main()
{int i,j,k,l,m,s;
while(dh(i,j,k,l,m)/4!=s){
	i++;
	if(i==9){i=0;j++;}
	if(j==9){j=0;k++;}
	if(k==9){k=0;l++;}
	if(l==9){l=0;m++;}
	s=i*100000+j*10000+k*1000+l*100+m*10+7;
}
cout<<s;
}
