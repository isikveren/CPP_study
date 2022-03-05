#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using std::vector;
using std::string;
int main()
{

    vector<string> svec;
    string s;
    int j = 0;
    while (std::cin >> s)
    {
        svec.push_back(s);
        j++;
    }
    
    for (int i = 0; i < j; i++)
    {
        for(int i1 = 0;i1<svec[i].size();i1++){
            if(islower(svec[i][i1])){
                svec[i][i1] = toupper(svec[i][i1]);
            }
        }
        std::cout << svec[i] << " ";
    }
    std::cout <<  std::endl;
    return 0;
}