#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Family
{
    map<string, vector<pair<string,string>>> family;
    public:
        Family(){};
        void add(string given_name, string first_name, string birthday)
        {
            family[given_name].push_back(make_pair(first_name,birthday));
        }
        void add(const char* given_name, const char* first_name, const char* birthday)
        {
            string str1 = given_name;
            string str2 = first_name;
            string str3 = birthday;
            family[str1].push_back(make_pair(str2,str3));
        }
        void show()
        {
            for(auto i:family)
            {
                cout << i.first << " ";
                for(auto j:i.second)
                {
                    cout << j.first << " "<< j.second;
                }
                cout << endl;
            }
        }
};

int main(void)
{
    Family fa;
    fa.add("White", "John", "20011024");
    fa.add("White", "Bath", "19990801");
    fa.add("Bush" , "John", "19780512");
    fa.show();
    return 0;
}