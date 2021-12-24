#include<iostream>
#include<string>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;

class Biggies
{
    typedef std::vector<std::string>::size_type size_type;
    size_type sz;
    std::vector<std::string> words;
    std::vector<std::string> res;

    void elimDups()
    {
        std::sort(words.begin(), words.end());
        auto end_unique = std::unique(words.begin(), words.end());
        words.erase(end_unique, words.end());
    }

    void biggies()
    {
        auto temp = sz;
        elimDups();
        std::stable_sort(words.begin(), words.end(), 
                          [](const std::string &str1, const std::string &str2)
                            { return str1.size() < str2.size(); });
        auto iter = std::find_if(words.begin(), words.end(), 
                                 [temp](const std::string &str)
                                     { return str.size() >= temp; });
        for (auto i = iter, j = words.end(); i != j;i++)
        {
            res.push_back(*i);
        }
    }

public:
    Biggies(size_type sz, std::ifstream& in)
    {
        this->sz = sz;
        if(in)
        {
            std::string str;
            while(in>>str)
            {
                words.push_back(str);
            }
            biggies();
        }
        else{
            std::cerr << "Can't open file" << std::endl;
        }
    }
    std::vector<std::string>& processed()
    {
        return res;
    }
};

int main(int argc,char** argv)
{
    ifstream in(argv[1]);
    Biggies bi(4, in);
    vector<string> v = bi.processed();
    for(auto i:v)
    {
        cout << i << " ";
    }
}