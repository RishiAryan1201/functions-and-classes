#include <iostream>

using namespace std;

float division(float dividend, float divisor)
{
	float ans;

	ans= dividend/divisor;
	return ans;
}

int main()
{
	float dividend, divisor;
	float ans;
	cout<<" enter dividend :";
	cin>>dividend;
	cout<<" enter divisor :";
	cin>>divisor;

	cout<<dividend<<" / "<<divisor<<division(dividend,divisor)<<endl;


	return 0;
}