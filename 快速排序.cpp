#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{int tmp=a;
a=b;
b=tmp;
}
void QuickSort(int a[],int left,int right)
{if(left>=right)
return;
int i=left,j=right;
while(i<j)
{while(j>i&&a[j]>=a[left])
j--;
while (i<j&&a[i]<=a[left])
i++;
swap(a[i],(i==j)?a[left]:a[j]);
}
QuickSort(a, left, i-1);
QuickSort(a, j+1, right);
}
int a[]={93,27,30,2,8,12,2,30,89};
int main()
{int size=sizeof(a)/sizeof(int);
QuickSort(a,0,size-1);
for(int i=0;i<size;++i)
cout<<a[i]<<",";
cout<<endl;
return 0;
}
