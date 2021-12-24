#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

int main(int argc,char** argv)
{
    ifstream in(argv[1]);
    string str;
    vector<string> v;

    while(in>>str)
    {
        v.push_back(str);
    }

    auto res = count_if(v.cbegin(), v.cend(), [](const string &str)
                        { return str.size() > 6; });

    cout << res << endl;

    return 0;
}