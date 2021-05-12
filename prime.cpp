#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"enter the number";
	cin>>n;
	//for(i=2;i<=n/2;i++) 
	//for(i=2;i<=sqrt(n);i++)
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			count++;
			cout<<" it is not a prime";
			break;
			
		}
		
	}
	if(count==0)
	{
		cout<<" it is prime";
		
	}
	return 0;
}
