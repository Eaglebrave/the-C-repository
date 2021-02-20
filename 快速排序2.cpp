#include <bits/stdc++.h>
using namespace std;
int n,a[1000001];
void qsort(int l,int r)
{int i=l,j=r,mid=a[(i+j)/2];
do{while(a[i]<mid)i++;
while(mid<a[j])j--;
if(i<=j){
	swap(a[i],a[j]);i++;j--;}
}
	while(i<=j);
	if(l<j)qsort(l,j);
	if(i<j)qsort(i,r);}
int main()
{cin>>n;
for(int i=1;i<=n;i++)cin>>a[i];
qsort(1,n);
for(int i=1;i<n;i++)
printf("%d ",a[i]);
printf("%d\n",a[n]);
return 0;
}
