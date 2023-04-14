#include <iostream>
#include <cstring>
using namespace std;

int main(){
    
    char name[5];
    char user[] = "rishi";
    cin >> name;
    if( strcmp(name, user) == 0){
        cout<<"welcome back rishi";
    }else{
        cout<<"wrong user try, again";
    }
    return 0;
}