#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main(int arvc, char** argv)
{
    string filename = argv[1];
    ifstream in(filename,ifstream::in);
    vector<string> v;
    if(in)
    {
        string str;
        while(in>>str)
        {
            v.push_back(str);
        }
    }
    else
    {
        cerr << "Can't open file :" + filename;
    }

    for(auto i:v)
    {
        cout << i << endl;
    }

    return 0;
}