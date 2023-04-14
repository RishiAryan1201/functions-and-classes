#include <iostream>

using namespace std;

void run()
{
	cout<<"run is running"<<endl;
}

void run(int a)
{
	cout<<"run with int "<<a<<" is running"<<endl;
}

void run(int a, int b)
{

}

void run(int a, char b)
{

}

int main()
{
	run();
	run(5);
	return 0;
} 