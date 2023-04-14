#include <iostream>


 using namespace std;

void change(int &no)
{
	no = no * no;
	cout<<"value in function  "<<no;
}


 int main()
 {
 	int n;
 	cout<<"enter value  ";
 	cin>>n;
 	cout<<endl;y
 	change(n);
 	cout<<endl;
 	cout<<"value in main   "<<n;  
 	return 0;
 }