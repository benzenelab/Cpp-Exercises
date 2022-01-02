#include<iostream>
#include<string>
#include<vector>
#include<memory>
using namespace std;

class StrBlob
{
    typedef std::vector<std::string>::size_type size_type;
    std::shared_ptr<std::vector<std::string>> data;
    public:
        StrBlob() : data(make_shared<std::vector<std::string>>()) {}
        StrBlob(std::initializer_list<std::string> il) : data(make_shared<std::vector<std::string>>(il)) {}
        
        size_type size()
        {
            return data->size();
        }
        bool empty() const
        {
            return data->empty();
        }
        void push_back(const std::string& str)
        {
            data->push_back(str);
        }
        std::string &front()
        {
            return data->front();
        }
        std::string &back()
        {
            return data->back();
        }
        const std::string &front() const
        {
            return data->front();
        }
        const std::string &back() const
        {
            return data->back();
        }

};

int main(void)
{


    return 0;
}