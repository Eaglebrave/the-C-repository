#include <bits/stdc++.h>
using namespace std;
int test(int a){
return a*a;}
int main()
{cout<<test<<endl;
int (*fp)(int a);
fp=test;
cout<<fp(5)<<endl;
cout<<(*fp)(10)<<endl;
return 0;
}
