#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

int main(void)
{
    vector<pair<string, int>> v;

    for (int i = 0; i < 5;i++)
    {
        string str;
        int t;
        cin >> str >> t;
        v.push_back(make_pair(str, t));
    }

    for(auto i:v)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}