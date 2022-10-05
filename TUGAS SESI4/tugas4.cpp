#include <iostream>
using namespace std;

string nama,hadiah;
int nilai1,nilai2,nilai3,ratarata;

int main()
{
  cout <<" nama siswa = ";
  cin >> nama;
  cout <<" nilai1 pertandingan 1= ";
  cin >> nilai1;
  cout <<" nilai2 pertandingan 2= ";
  cin >> nilai2;
  cout <<" nilai3 pertandingan 3= ";
  cin >> nilai3;

  ratarata=(nilai1+nilai2+nilai3)/3;
    cout << "Widih Siswa yang namanya " << nama << endl;
    cout << " Mendapat nilai ratarata" << ratarata << endl;
  

  if(ratarata >=85){
    cout << "Selamat Mase!!! Kamu Dapet Komputer core i5 !! Buat Belajar Bukan Game awas yaa !! " << endl;
  }
  else {
    if(ratarata >=70){
    cout << " GRATSS!!! Kamu Dapat Uang Tunai Sebesar Rp. 3.000,000 Buat Beli Mainan !! " << endl;
  }
    else{
      (ratarata <=70);
    cout << " YAHUUU !!! Kamu Dapat Hadiah Liburan Ke Seluruh Dunia!! "<< endl;
    }
  }
  
  getchar();
  }

