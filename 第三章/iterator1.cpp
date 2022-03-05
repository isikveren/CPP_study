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

    cout << s << endl;
    return 0;
}