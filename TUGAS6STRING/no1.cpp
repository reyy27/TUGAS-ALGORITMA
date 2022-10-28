#include <iostream>
#include <string>
using namespace std;

int main() {
	
	string kalimat;
	
	cout<<" MENGHITUNG PANJANG KATA "<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<endl;
	
	cout<<"Masukan String : ";
	getline(cin,kalimat);
	
	cout << "Panjang sring adalah : " << kalimat.length();
	return 0;
  }