#include<iostream>

using namespace std;
class laptop
{
	public :
	string name;
	string brand;
	float price;
	string processor;

	void getdata()
	{
		cout<<"Name :";
		cin>>name;
		cout<<"Brand :";
		cin>>brand;
		cout<<"Price :";
		cin>>price;
		cout<<"processor :";
		cin>>processor;
	}

	void showdata()
	{
		cout<<name<<endl<<brand<<endl<<price<<endl<<processor;
	}

	void stratup()
	{
		cout<<brand<<" is started.";
	}

	void shutdown()
	{
		cout<<brand<<"is shutting down.";
	}
	
	
};

int main()
{
	laptop laptop1;
	laptop1.getdata();
	cout<<endl;
	laptop1.showdata();
	cout<<endl;
	laptop1.stratup();
	cout<<endl;
	cout<<"process done."<<endl;
	laptop1.shutdown();

	return 0;
}