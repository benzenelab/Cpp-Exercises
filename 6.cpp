#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    vector<string> v;
    string str;

    for(int i=0;i<5;i++)
    {
        cin >> str;
        for(auto &c:str)
        {
            c = toupper(c);
        }
        v.push_back(str);
    }
    for(auto s:v)
    {
        cout << s << endl;
    }

    return 0;
}