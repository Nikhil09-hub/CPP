#include <iostream>
#include <string>
int main(){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin,name);
    if(name.empty()){
        std::cout <<" Your name is empty \n";
    }
    else{
        std::cout << "Your name has "<< name.length() <<" letters \n" ;
    }
    // clearing name
    //name.clear();
    std::string email=name;
    email.append("@gmail.com");
    std::cout << "Your email " << email <<'\n';
    //accesing characters in string
    char ch = name.at(1);
    std::cout << ch <<'\n';
    //inserting into strings string.insert(index,"substr")
    name.insert(name.length()," Nandhan");
    std::cout << "Full Name " << name;

    // string.erase(start index, end index)
    return 0;
}