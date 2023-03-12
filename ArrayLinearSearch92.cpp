#include<iostream>
using namespace std;

int main()
{
 	int A[10];
	int key;
	cout<<"Enter Numbers";
	    
	for(int i=0;i<10;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter Key";
	cin>>key;
	    
	for(int i=0;i<n;i++)
	{
		if(key==A[i])
		{
			cout<<"Found at"<<i;
			return 0;
		}
	}
	    
	cout<<"Not Found";
	
	return 0;
	    
}		
