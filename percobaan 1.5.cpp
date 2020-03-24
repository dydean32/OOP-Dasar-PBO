#include <iostream>
using namespace std;

class pasar
{
	
	private :
		char dagangan[10];
		int harga; 
		int jumlah;
public:
  void get ();
  void total_bayar(pasar,pasar);


  };
  
  void pasar::get()
  {
  	cout<<"Nama Barang: ";
  	cin>>dagangan;
  	cout<<"Harga: ";
  	cin>>harga;
  	cout<<"Jumlah: ";
  	cin>>jumlah;
  }
  void pasar :: total_bayar (pasar p1, pasar p2)
  {
  	harga = (p1.harga*p1.jumlah)+(p2.harga*p2.jumlah);
  	cout<<"Harga "<<p1.dagangan<<" dan "<<p2.dagangan;
  	cout<<" adalah: "<<harga;
  }

int main()
{
  pasar d1, d2, d3;  
  cout<<"Pembelian 1 : "<<endl;
  d1.get();
  cout<<"Pembelian 2 : "<<endl;
  d2.get(); 
  d3.total_bayar(d1, d2);
  return (0);
}

