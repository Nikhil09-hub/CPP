#include <iostream>
#include <vector>
//typedef is used to give another name for datatypes
//typedef std::vector<std::pair<std ::string, int>> pairlist_t;
//typedef std::string text_t;
using text_t = std::string;
using pairlist_t = std::vector<std::pair<std::string,int>>;

int main(){
    pairlist_t new_list;
    text_t name = "Ravi";
    std::cout << name;
    return 0;
}