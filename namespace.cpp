//A namespace is a named scope that holds identifiers to avoid name conflicts
#include <iostream>
#include <string>
namespace first{
    int x=1;
}
namespace second{
    int x=2;
}

int main(){
    int x =0;
    // :: scope resolution operator
   std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    
    using namespace first;
    std::cout << x << '\n';

    using namespace std;
    //or 
    // using std::cout or using std::string;
    string name = "Manasa";
    cout << "Hello " << name << '\n';
    return 0;
}