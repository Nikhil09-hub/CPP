#include <iostream>
#include <string>
int main(){
    using namespace std;
    //while loop
    int i=1;
    cout << "Print numbers using while loop" <<'\n';
    while(i<=5){
        cout << i << ' ';
        i++;
    }
    //do-while loop
    i=1;
    cout << "\nPrint numbers using do-while loop" <<'\n';
    do{
        cout << i << ' ';
        i++;
    }while(i<=5);
    //for loop
    cout << "\nPrint numbers using for loop" <<'\n';
    for(i=1;i<=5;i++){
         cout << i << ' ';
    }
    return 0;
}