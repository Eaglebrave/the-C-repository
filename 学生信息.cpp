#include <bits/stdc++.h>
using namespace std;
struct student{
	string name;
	char sex;
	int age;
	double weight;
};
int main(){
	student stu;
	cin>>stu.name>>stu.sex>>stu.age>>stu.weight;
	cout<<stu.name<<" "<<stu.sex<<" "<<stu.age<<" "<<fixed<<setprecision(1)<<stu.weight;
	return 0;
}
