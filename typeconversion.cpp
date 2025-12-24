#include <iostream>
int main(){
    int a = 3.14;
    std::cout << a<<'\n';
    double b= (int)4.54;
    std::cout <<b<<'\n';
    char letter =100;
    int value = letter;
    std::cout << letter << ':' << value << '\n';

    int marks=8;
    int max_marks=10;
    double score = marks/max_marks *100 ; //output=0 
    std::cout << score<<'%' << '\n';
    double new_score = (double)marks/max_marks *100 ; //output=0 
    std::cout << new_score <<'%'<< '\n';
    return 0;
}