#include <iostream>
using namespace std;

class sensus {
private:
    char nama[30];
public :
    sensus()  
    {
        cout<<" Constructor works"<<endl;
        cout<<"Siapakah nama anda?";
        cin.getline(nama,30);
    }
    void tampilan()
    {

        cout<<"Nama warga: "<<nama<<endl;
    }
};
int main()
{
    sensus warga1,warga2;
    warga1.tampilan();
    warga2.tampilan();
}
