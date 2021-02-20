#include <bits/stdc++.h>
using namespace std;
struct worktime{
	int hr,minut,sec;
	worktime operator+(const worktime x)const{
	worktime tmp;
	tmp.sec=(sec+x.sec)%60;
	tmp.minut=(minut+x.minut+(sec+x.sec)/60)%60;
	tmp.hr=hr+x.hr+(minut+x.minut+(sec+x.sec)/60)/60;
	return tmp;
	}
};
int main()
{worktime stu,sum;
int n;
cin>>n;
sum.hr=sum.minut=sum.sec=0;
for(int i=1;i<=n;i++)
{cin>>stu.hr>>stu.minut>>stu.sec;
sum=sum+stu;
}
cout<<sum.hr<<"hour"<<" "<<sum.minut<<"minute"<<" "<<sum.sec<<"second";
return 0;
}
