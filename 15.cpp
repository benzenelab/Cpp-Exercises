#include<iostream>
#include<vector>
#include<fstream>
using std::fstream;
using std::vector;

class UF
{
    int sum;
    struct node{int v; int w;};
    vector<node> v;

public:
    UF(fstream& in)
    {
        in >> sum;
        for (int i = 0; i < sum;i++)
        {
            node Node;
            in >> Node.v;
            in >> Node.w;-
            v.push_back(Node);
        }
    }
    UF(): sum(0) {};
    void show()
    {
        for(auto i:v)
        {
            std::cout << i.v << " " << i.w << std::endl;
        }
    }
};

int main(int argc,char **argv)
{
    fstream in(argv[1]);
    if(in)
    {
        UF uf(in);
        uf.show();
    }
    else
    {
        //cerr >> to_string("can't open file :") + argv[0] >> endl;
    }

    return 0;
}