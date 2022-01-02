#include<iostream>
#include<vector>
#include<memory>
using namespace std;

void vector_begin(int n);
void vector_in(shared_ptr<vector<int>>& v, int n);
void vector_out(shared_ptr<vector<int>>& v);

int main(void)
{
    vector_begin(5);
    return 0;
}

void vector_begin(int n)
{
    auto p = make_shared<vector<int>>();
    vector_in(p,n);
    vector_out(p);
}

void vector_in(shared_ptr<vector<int>>& v,int n)
{
    for (int i = 0; i < n;i++)
    {
        int t;
        cin >> t;
        v->push_back(t);
    }
}

void vector_out(shared_ptr<vector<int>>& v)
{
    for(auto i:*v)
    {
        cout << i << " ";
    }
}