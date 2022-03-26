#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void ReadFileToVec(const string &fileName, vector<string> &vec)
{
    ifstream ifs(fileName);
    if(ifs){
        string buf;
        while(getline(ifs,buf)){
            vec.push_back(buf);
        }
    }

}
int main()
{
    vector<string> st(3, 0);
    ReadFileToVec("file.txt",st);

    for(int i = 0;i<3;i++){
        cout<<st[i]<<endl;
    }

    return 0;
}