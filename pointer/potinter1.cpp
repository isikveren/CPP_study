#include <iostream>

#define LOG(x) std::cout<<x<<std::endl

int main(){

    int x = 10;
    int* ptr = &x;
    LOG(*ptr);

    
    return 0;
}