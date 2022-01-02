#include<iostream>
#include<vector>
using namespace std;

void vector_begin(int n);
void vector_in(vector<int> *v, int n);
void vector_out(vector<int> *v);

int main(void)
{
    vector_begin(5);
    return 0;
}

void vector_begin(int n)
{
    vector<int> * p= new vector<int>;
    vector_in(p,n);
    vector_out(p);
    delete p;
}

void vector_in(vector<int>* v,int n)
{
    for (int i = 0; i < n;i++)
    {
        int t;
        cin >> t;
        v->push_back(t);
    }
}

void vector_out(vector<int>* v)
{
    for(auto i:*v)
    {
        cout << i << " ";
    }
}