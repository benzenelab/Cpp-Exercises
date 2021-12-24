#include<iostream>
#include<map>
#include<algorithm>
#include<fstream>
#include<string>
#include<cctype>
using namespace std;
using std::remove_if;

int main(int argc,char**argv)
{
    ifstream in(argv[1]);
    map<string, size_t> words;

    string str;
    if(in)
    {
        while(in>>str)
    {
        for(auto &i:str)
        {
            i = tolower(i);
        }
        /*auto iter = find_if(str.begin(),str.end(),[](const char c)->bool{
            return ispunct(c);
        });
        str.erase(iter);*/
        str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());
        words[str]++;
    }

    for(auto i:words)
    {
        cout << i.first << " " << i.second << endl;
    }
    }
    else{
        cerr << "Can't open the file!";
    }
    

    return 0;
}