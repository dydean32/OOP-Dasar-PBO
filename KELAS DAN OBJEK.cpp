#include <iostream>

using namespace std;

class salam {
private:
    string konten;
    string kampus;
public :
    void inisialisasi()
    {
        konten="Hello World";
        kampus="IT Telkom Purwokerto";
    }
    void tampilan()
    {
        cout<<konten<<endl;
        cout<<kampus;
    }
};
int main()
{
    salam hello;
    hello.inisialisasi();
    hello.tampilan();
}

