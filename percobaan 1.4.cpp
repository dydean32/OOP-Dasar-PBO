#include <iostream>
using namespace std;
class dyas
{
	
	private :
		int panjang;
		int lebar;
		int sisi;
public:
  dyas() : panjang(0),lebar(0), sisi(0)                         /*Konstruktor tanpa argument*/
  {
    cout <<"Konstruktor tanpa argument bekerja" << endl;
  }
    dyas (int sisi)                 /*Konstruktor dengan 1 argument*/
  {
    cout<< "Konstruktor dengan 1 argument bekerja" << endl;
    cout << "Luas persegi= " << sisi * sisi << endl;
  }
  dyas ( int panjang , int lebar )     /*Konstruktor dengan 2 argumen*/
  {
    cout<< "Konstruktor dengan 2 argument bekerja" << endl;
    cout << "Luas persegi panjang= " << panjang * lebar<< endl;
  }

};

int main()
{
  dyas obj1;     //pendefinisian objek 1
  dyas obj2(5);   //pendefinisian objek 2 
  dyas obj3(9,6); //pendefinisian objek 3
  return (0);
}

