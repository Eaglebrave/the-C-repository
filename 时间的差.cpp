#include <bits/stdc++.h>
using namespace std;
struct stu{
	int hour;
	char n;
	int minute;
	char m;
	int second;
};
stu a[2];
int main()
{cin>>a[1].hour>>a[1].n>>a[1].minute>>a[1].m>>a[1].second>>a[2].hour>>a[2].n>>a[2].minute>>a[2].m>>a[2].second;
cout<<(a[1].hour-a[2].hour)*60*60+(a[1].minute-a[2].minute)*60+a[1].second-a[2].second<<endl;}
