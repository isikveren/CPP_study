#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s("some string");
    if (s.begin() != s.end())
    {
        auto it = s.begin();
        while(it!=s.end()){
             *it = toupper(*it);
             it++;
        }
    }
    for(auto iit = s.cbegin();iit !=s.cend();++iit)
    {
        cout << *iit <<endl;
    }
    return 0;
}