#include <bits/stdc++.h>
using namespace std;

int add(int a,int b){
    return a+b;
}
int swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
int new_swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int main(){
    cout << add(4,5) << '\n';
    int a = 10;
    int b = 20;
    //call by value
    swap(a,b);
    cout << "After call by value  a = " << a<< " b = " <<b <<'\n';
    //call by reference
    new_swap(a,b);
        cout << "After call by reference  a = " << a << " b = " <<b <<'\n';



    return 0;
}