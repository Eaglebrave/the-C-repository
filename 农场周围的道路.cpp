#include <bits/stdc++.h>
using namespace std;
int k,s=0,x,y;//sΪ��ǰͣ�³Բݵ���ţ���� 
bool sl(int n)//����ǰ��ţ������Ϊ���k�����������ֳ���������x,y��ֵ,���޷�ƽ��ʱ����false  ��sl=������ 
{x=(n-k)/2;
y=x+k;
if(x+y!=n)return false;
else return true;}
int fz(int n)//�ݹ麯��,nΪ��ǰ������ţ���� ��fz=���飩 �ݹ麯�� 
{if(n<=k+1){s++;
return 0;}
else if(sl(n)==false){s++;
return 0;}
else {sl(n);fz(x);
sl(n);fz(y);}
}
int main()
{int n;
cin>>n>>k;
fz(n);
cout<<s;}
