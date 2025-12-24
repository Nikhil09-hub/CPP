#include <iostream>
#include <string>
int main (){
    using namespace std;
    cout << "Enter any number ";
    int num;
    cin >> num;
    if (num > 0){
        cout << "Number is positive";
    } 
    else if (num < 0){
        cout << "Number is negitive";
    } 
    else{
        cout << "Number is equal to zero ";
    } 


    return 0;
}