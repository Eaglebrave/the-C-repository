#include <bits/stdc++.h>
using namespace std;
int add(int a,int b){
	return a+b;
}
typedef int(*addp)(int,int);
int main()
{addp fp=add;
cout<<fp(2,3)<<endl;
return 0;
}
