#include <iostream>

using namespace std;

int factorial(int n)
{
	int ans=1;
	for(int i=n; i>0; i--)
	{
		ans = ans * i;
	}
	return ans;
}

int main()
{
	int no;
	cout<<" enter number :";
	cin>>no;

	cout<<no<<" "<<"! ="<<factorial(no)<<endl;


	return 0;
}