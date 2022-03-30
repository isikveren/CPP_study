#include <iostream>
#include <vector>
#include <string>
using std::vector;

int main(){
    vector<int> ivec(10,1);
    vector<std::string> svec(10,"hello");

    std::cout<<ivec.size()<<std::endl;
  
    for(int i = 0;i<10;i++){
        std::cout<<ivec[i];
    }
    return 0;
}