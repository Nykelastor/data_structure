#include<iostream>
 using namespace std;
 int main()
{
int a[20],n,x,i,flag=0;
cout<<"How many elements?\n";
cin>>n;
cout<<"\nEnter elements of the array\n";
for(i=0;i<n;++i)
cin>>a[i];
cout<<"Enter elements to search:\n";
cin>>x;
for(i=0;i<n;++i)
{
if(a[i]==x)
{
flag=1;
break;
}
}
if(flag)
cout<<"Element is found at position\n"<<i+1;
else
cout<<"Element not found";
return 0;
}
