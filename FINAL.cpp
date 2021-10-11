#include<iostream>
using namespace std;
int main()
{
    int i,j,temp,pass=0;
    int a[10]={10,2,0,14,43,25,18,15,45};
    cout<<"input list..\n";
    for ( i = 0; i < 10; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }
 pass++;       
    }
    cout<<"Sorted elements list...\n";
    for ( i = 0; i < 10; i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n number of passes take to sort the list:"<<pass<<endl;
    return 0;
    
}
