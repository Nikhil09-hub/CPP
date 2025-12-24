#include <iostream>
#include <string>
int main(){
    // cour << insertion operator
    //cin >> extraction operator
    using namespace std;
    string name;
    cout<<"Whats your name? ";
    cin >> name;
    int age;
    cout<<"Whats your age? ";
    cin >> age;
    cout <<"Hello "<<name;
    string full_name;
    cout<<"Whats your full name? ";
    getline(cin >> ws,full_name);
    cout <<"Hello "<<full_name;
    return 0;
}