#include <iostream>
using namespace std;

class balok {
private:
    int vol;
public :
    void hitung( int p , int l , int t) //fungsi dengan parameter
    {
        cout<<"Besar p: "<<p<<endl;
        cout<<"Besar l: "<<l<<endl;
        cout<<"Besar t: "<<t<<endl;
        vol=p*l*t;
    }
    void tampilan()
    {
        cout<<"Volume : "<<vol;
    }
};
int main()
{
    balok hello;
    hello.hitung(10,2,3);
    hello.tampilan();
}


