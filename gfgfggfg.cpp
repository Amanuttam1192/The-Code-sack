#include<iostream>
using namespace std;


int main()
{
	int n;
	cout<<"Enter size of array:";
	cin>>n;
	int A[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	char B[2];
	cout<<"Gender of student:";
	cin>>B;
	
	for(int i=0;i<n;i++)
	{
		if(B[2]=='g')
		{
			sum=sum+A[(2*i)+1];
			
		}
		else if(B[2]=='b')
		{
			sum=sum+A[2*i];
			
			
		}
	}
	cout <<sum;
	
	
}
