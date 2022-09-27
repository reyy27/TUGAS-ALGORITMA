#include <iostream>
using namespace std;

int main()
{
  float r,t;
  float volume , luas;
  float Pi=(22)/7;

  cout <<"MENGHITUNG LUAS DAN VOLUME LINGKARAN";
  cout <<"\n---Reynald Fernando TI-22-PB---\n";
  cout <<"\n--- CICI PALING BAIK PINGIN KU KASIH KEJU ---\n";

  
  cout <<"\nmasukan jari jari lingkaran: ";
  cin >> r;
  cout <<" masukan tinggi tabung: ";
  cin >>t;
    volume= Pi*r*r*t;
    luas= 2*Pi*r*(r+t);
  cout <<" volume tabung adalah : " << volume << endl;
  cout <<" luas permukaan tabung adalah : " << luas << endl;

  return 0;
}