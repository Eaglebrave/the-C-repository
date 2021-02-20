#include <bits/stdc++.h>
using namespace std;
int main(){
	union res{
		char rank[5];
		int x;
	};
	struct stu{
		char f;
		res score;
	};
	stu a[1001];
	int n,count=0,num=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].f;
		switch(a[i].f){
			case'C':for(int j=0;j<4;j++)
			cin>>a[i].score.rank[j];
			count++;
			break;
			case'N':cin>>a[i].score.x;
			num+=a[i].score.x;
		}
	}
	cout<<count<<" "<<num/(n-count)<<endl;
	return 0;
}
