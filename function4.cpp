#include <iostream>
using namespace std;

void pattern()
{
	int n;
	cout<<"number of rows you want :";
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		for(int s=1; s<=(n-i); s++)
		{
			cout<<" ";
		}
		for(int k=1 ; k<=((2*i)-1) ; k++)
		{
			cout<<k;
		}
		cout<<endl;
	}
}

int main()
{
	pattern();
	pattern();
	pattern();
	
	return 0;
}