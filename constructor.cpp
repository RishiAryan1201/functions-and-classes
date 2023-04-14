#include <iostream>
#include <string>

using namespace std;

class laptop
{
    public:
	string name;
	float price;


	laptop()
	{
		cout<<"Name :"<<name<<endl<<"Price :"<<price<<endl;
	}


	laptop( string lname, float lprice)
	{
		name= lname;
		price= lprice;
		cout<<"Name :"<<name<<endl<<"Price :"<<price<<endl;
	}


	laptop(const laptop &p)
	{
		name= p.name;
		price= p.price+100.5;
		cout<<"Name :"<<name<<endl<<"Price :"<<price<<endl;
	}
	~laptop()
	{
		cout<<"distructing"<<price<<endl;
	}
};

int main()
{
	laptop l;
	laptop m("Mac", 100.0);
	laptop k = m;
	return 0;
}