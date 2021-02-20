#include <bits/stdc++.h>
using namespace std;
struct stu{
	string name;
	string sex;
	int year,month;
};
const int MAXN=110;
stu a[MAXN];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>a[i].name>>a[i].sex>>a[i].year>>a[i].month;
	for(int i=1;i<=n;i++)
	for(int j=i+1;j<=n;j++)
	if(a[i].year<a[j].year||a[i].year==a[j].year==a[j].year&&a[i].month<a[j].month)
	swap(a[i],a[j]);
	for(int i=1;i<=n;i++){
		cout<<a[i].name<<" "<<a[i].sex<<" ";
		cout<<a[i].year<<" "<<a[i].month<<endl;
	}
	return 0;
	}
