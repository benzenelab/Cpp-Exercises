#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

int main(int argc, char** argv)
{
    vector<string> v;
    string line;
    ifstream in(argv[1]);
    while(getline(in,line))
    {
        v.push_back(line);
    }

    for(auto i:v)
    {
        istringstream iss(i);
        string str;
        while(iss>>str)
        {
            cout << str << " ";
        }
    }
    

    return 0;
}