#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std;

int main(void)
{
    std::ofstream out("12doc.txt", std::ofstream::app);
    std::vector<int> v = {1, 4, 9, 6, 8, 7, 6, 4, 8};

    for(auto i:v)
    {
        out << to_string(i) + "hahaha" << " ";
    }


    return 0;
}