#include <bits/stdc++.h>
using namespace std;
struct tstudent{
	int num;
	char name[200];
	char sex;
	int age;
};
int main()
{tstudent x={13,"lihao",'m',35};
tstudent *p;
p=&x;
cout<<x.num<<endl;
cout<<(*p).name<<endl;
cout<<p->age<<endl;
return 0;
}
