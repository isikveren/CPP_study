#include <iostream>
#include <string>

using std::string;

int main(){

    string s1 = "hello string";
    std::cout<<s1<<std::endl;

    string s2(10,'c');
    std::cout<<s2<<std::endl;
    return 0;
}