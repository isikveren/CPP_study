#include <iostream>
#include <vector>
#include <string>

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
        std::cout << svec[i] << std::endl;
    }
    return 0;
}