#include <iostream>
#include <string>
int main(){
    //int 
    int x = 12;
    int age = 18;
    // double-decimal values
    double price = 60.5;
    double temperature = 23.5;
    //char
    char initial='A';
    char currency = '$';
    //boolean
    bool pass = true;
    bool success = true;
    //string
    std::string name = "Bob";

    std::cout <<"I am " << name <<'\n';

    //const 
    const double pi=3.14;
    double radius=7;
    double circumference = 2* pi * radius;
    std::cout <<circumference << '\n';

    return 0;
}
