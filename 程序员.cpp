#include <bits/stdc++.h>
using namespace std;
int main()
{char s[110];
int top=0;
string str;
while(getline(cin,str)){
	for(int i=0;i<=str.size();++i){
		switch(str[i]){
			case'#':top--;break;
			case'@':top=0;break;
			default:top++;s[top]=str[i];
		}
	}
	for(int i=1;i<=top;i++)cout<<s[i];
	cout<<endl;
}
return 0;
}
