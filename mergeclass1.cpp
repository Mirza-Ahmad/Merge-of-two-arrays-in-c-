#include<iostream>
#include<bits/stdc++.h>
#define N 100
using namespace std;
class merge_array
{
public:
void Merge(int a[N], int b[N], int c[N], int n1, int n2)
{
int i=0,j=0,k=0;
while(i<n1 && i<n2)
{
if(a[i]<b[i])
{
c[k++]=a[i++];
}
else
{
c[k++]=b[i++];
}
}
while(i<n1)
{
c[k++]=a[i++];
}
while(j<n2)
{
c[k++]=b[j++];
}
}
};
int main(void)
{
merge_array m;
int p1,p2;
int arr1[N];
int arr2[N];
int arr3[N];
int i;
cout<<"Enter the size of the array:";
cin>>p1;
cout<<"Enter the elemets of the array:"<<endl;
for(i=0; i<p1; i++)
{
cout<<"Elements of the first array "<<i+1 <<":";
cin>>arr1[i];
}
cout<<"Enter the second size of the array:";
cin>>p2;
cout<<"Enter the second array elements:"<<endl;
for(i=0; i<p2; i++)
{
cout<<"Elements of the array "<<i+1 <<":";
cin>>arr2[i];	
}
cout<<"\nElements of the first array sorted is =";
for(i=0; i<p1; i++)
{
cout<<arr1[i];
}
cout<<"\nElements of the second array sorted is =";
for(i=0; i<p2; i++)
{
cout<<arr2[i];
}
sort(arr1, arr1 + p1);
sort(arr2, arr2 + p2);
m.Merge(arr1, arr2, arr3, p1, p2);
cout<<"\nElements of the array after merging is =";
for(i=0; i<( p1 + p2); i++)
{
cout<<arr3[i];
}
return 0;		
}
