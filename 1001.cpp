#include <iostream>
using namespace std;
int main()
{
	int n;
	int count=0;
	cin>>n;
	do
	{
		if(n==1)
		{
			break;
		}
		if(n%2==0)
		{
			n=n/2;
			count++;
		}
		else
		{
			n=(3*n+1)/2; 
			count++;
		}
		
	}while(count);
	cout<<count<<endl;
	return 0;
} 
