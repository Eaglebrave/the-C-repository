#include <bits/stdc++.h>
using namespace std;
int a[9],p[9][7];
int main() {
	for(int i=0; i<=8; i++)a[i]=0;
	for(int i=0; i<=9; i++)p[i][1]=i;
	for(int j=2; j<=7; j++)
		for(int i=0; i<=9; i++)
			p[i][j]=p[i][j-1]*i;
	int len=3,count=0;
	a[3]=1;
	while(a[8]==0) {
		int total=0;
		for(int i=1; i<=len; i++)
			total=total+p[a[i]][len];
		int num=0;
		for(int i=len; i>=1; i--)
			num=num*10+a[i];
		if(total==num) {
			count++;
			cout<<"ANS."<<count<<":"<<num<<endl;
		}
		int i=1;
		while(a[i]==9) i++;
		a[i]++;
		 for(int j=1; j<=i-1; j++)a[j]=0;
		if(i==len+1) len++;
	}
	return 0;
}
