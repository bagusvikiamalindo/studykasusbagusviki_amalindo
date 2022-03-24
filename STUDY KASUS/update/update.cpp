#include <cstdlib>
#include <iostream>
using namespace std;
class Bensin{
      public :
             Bensin();
             void pilihan();
             void hitung_uang();
             void hitung_liter();
      private :
              double uang, liter, tampil;
              char pil;
              char ambil;
              double harga, pertamax, pertalite;
      };
Bensin::Bensin(){
     harga = 0;
     pertalite = 7000;
     pertamax = 9000;
     
     }
void Bensin::pilihan(){
	cout<<"======================="<<endl;
     cout<<"selamat Datang di SPBU"<<endl;
     cout<<"======================"<<endl;

     cout<<"pilih bensin  : "<<endl;
     cout<<"1.Pertalite"<<endl;
     cout<<"2.Pertamax "<<endl;
    
     cout<<"masukkan pilihan anda = ";
     cin>>ambil;
     if(ambil == '1' || ambil == '2' ){
     cout <<"beli berdasarkan :"<<endl;
     cout<<"1 -> uang"<<endl;
     cout<<"2 -> liter"<<endl;
     cout<<"masukkan pilihan pembelian : ";
     cin>> pil;
     if(pil == '1'){
          hitung_uang();
          }
     else if(pil=='2'){
          hitung_liter();
          }
     else{
          system("cls");
          pilihan();
          }
              }
     system("cls");
     pilihan();   
     }
void Bensin::hitung_uang(){
     cout<<"Masukan jumlah uang : ";
     cin>> uang;
     if(ambil == '1'){
              harga = pertalite;
              }
     else if (ambil == '2'){
          harga = pertamax;
          }
     
     tampil = uang / harga;
     cout<<"jumlah Bensin yang dibeli : "<<tampil <<" liter"<<endl;
     system("PAUSE");
     system("cls");
     pilihan();
     }
void Bensin::hitung_liter(){
     cout<<"masukkan jumlah liter : ";
     cin>> liter;
      if(ambil == '1'){
              harga = pertalite;
              }
     else if (ambil == '2'){
          harga = pertamax;
          }
     
     tampil = harga * liter;
     cout<<"uang yang harus dibayar : Rp "<<tampil <<".00"<<endl;
     system("PAUSE");
     system("cls");
     pilihan();
     }
int main(int argc, char *argv[])
{
    Bensin x;
    x.pilihan();
    system("PAUSE");
    return EXIT_SUCCESS;
}