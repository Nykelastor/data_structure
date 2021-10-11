#include<iostream>
using namespace std;
int main()
{
int a[20],x,i,flag=0,n;
cout<<"How many elements \n";
cin>>n;
cout<<"Enter elements of the array \n";
for(i=0;i<n;i++)
cin>>a[i];
cout<<"Enter element to serch \n";
cin>>x;
for(i=0;i<n;i++)
{
if(a[i]==x)
{
flag=1;
break;
}
}
if(flag==1)
cout<<"\nElement is found possition="<<i+1;
else
cout<<"\nElement not found";
return 0;
}


