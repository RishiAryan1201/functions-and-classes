#include <iostream>

using namespace std;

int table(int no)
{
	int ans=0;
	for(int i=1; i<=10; i++)
	{
		ans = ans + (no*i) ;
	}

	return ans;
}

int main()
{
	int n;
	cout<<"whose table sum do you want :";
	cin>>n;

	cout<<"answer is :"<<table(n);


} 