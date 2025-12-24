#include <iostream>
#include <string>
int main(){
    using namespace std;
    char ch;
    cout << "Add:1\nSubtract:2\nMultiply:3\nDivision:4\nChoose Option:";
    int option;
    cin >> option;
    cout << "Enter numbers:";

    int a,b;
    cin >> a;
    cin >> b;
    switch(option){
        case 1:
            cout << a+b;
            break;
        case 2:
            cout << a-b;
            break;
        case 3:
            cout << a*b;
            break;
        case 4:
            cout << a/b;
            break;
    }


    return 0;
}