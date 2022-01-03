#include<iostream>
#include<memory>
#include<iterator>
using namespace std;

template <class T>
class MyPtr
{
    T *cur;
public:
    MyPtr() : cur(nullptr) {}
    MyPtr(T& pointed): cur(&pointed) {}
    MyPtr(T* pointed): cur(pointed) {}
    ~MyPtr() { cur = nullptr; }
    void set(T *data) { cur = data; }
    void set(T &data) { cur = &data; }

    T &operator*() { return *this->cur; }
    T &operator->() { return &this->operator*(); }

    MyPtr &operator++()
    {
        ++(this->cur);
        return *this;
    }
    MyPtr &operator--()
    {
        --(this->cur);
        return *this;
    }

};

template <class T> bool opreator==(MyPtr<T>& a,MyPtr<T>& b)
{
    if(a.)
} 

template <class T>
class MyArray
{
    T *ptr;
    size_t length;
    MyPtr<T> ptr_b, ptr_e;

public:
    MyArray() : ptr(nullptr), length(0) {}
    MyArray(size_t len) : ptr(new T(len)), length(len), ptr_b(begin(ptr)), ptr_e(end(ptr))  {}
    ~MyArray() { delete[] ptr; }

    T &operator[](int index) { return ptr[index]; }

    auto begin() { return ptr_b; }
    auto end() { return ptr_e; }
};

int main(void)
{
    MyArray<int> a(5);
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    for(auto i=a.begin(),j=a.end())
    {
        cout << i << " ";
    }

}