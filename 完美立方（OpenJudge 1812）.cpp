#include<iostream>
using namespace std;
int n;
int main()
{cin>>n;
for(int a=2;a<=n;a++)
for(int b=2;b<=n;b++)
for(int c=2;c<=n;c++)
for(int d=2;d<=n;d++)
if(a*a*a==b*b*b+c*c*c+d*d*d&&c>=b&&c<=d)
cout<<"Cube = "<<a<<", Triple = ("<<b<<","<<c<<","<<d<<")"<<endl;
return 0;
}
