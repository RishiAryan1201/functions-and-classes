#include<iostream>
#include<string>

using namespace std;

class laptop
{
	string name;
	float price;

public :
	laptop()
	{
	name = "mac";
	price = 100.0;
	}
	void show()
	{
		cout<<"Name :"<<name<<endl<<"Price :"<<price;
	}
};

int main()
{
	laptop l;
	l.show();
	return 0;
}