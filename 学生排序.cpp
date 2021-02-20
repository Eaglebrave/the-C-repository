#include <bits/stdc++.h>
using namespace std;
struct stu{
	string name;
	int heigh;
	int num;
	void input(){
		cin>>name>>heigh>>num;
	}
	void output(){
		cout<<name<<" "<<heigh<<" "<<num<<endl;
	}
};
stu a[110];
int main(){
	int n;
	stu maxn;
	maxn.heigh=maxn.num=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		a[i].input();
		if(a[i].heigh>maxn.heigh)maxn=a[i];
		else if(a[i].heigh&&a[i].num<maxn.num)maxn=a[i];
	}
	maxn.output();
	return 0;
}
