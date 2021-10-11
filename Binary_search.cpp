#include<iostream>
using namespace std;
int main()
{
int List[25],MAX;
int First,Last,Middle,I,Item,LOC=-1;
cout<<"How many elements:";
cin>>MAX;
cout<<"Enter binary elements is ascending order:\n";
for(I=0;I<MAX;I++)
cin>>List[I];
cout<<"Enter the item to be searched:\n";
cin>>Item;
First=0;
Last=MAX-1;
while(First<=Last)
{
Middle=(First+Last)/2;
if (Item==List[Middle]);
{
LOC=Middle;
break;
}
if(Item>List[Middle])
First=Middle+1;
else
Last=Middle-1;
}
if(LOC!=-1)

cout<<"The item is found at position"<<LOC+1;

else
{
cout<<"The item is not found in the array";
}
return 0;
}
