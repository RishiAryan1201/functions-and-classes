#include <iostream>
#include <string>

using namespace std;

class laptop
{
	public:
	string name;
	int processor;

	void run()
	{
		cout<<"void run"<<endl;
	}

	void run(int a)
	{
		cout<<a<<"int run"<<endl;
	}
};
int main()
{

	laptop laptop1;

	laptop1.run();
	laptop1.run(5);
	return 0;
}