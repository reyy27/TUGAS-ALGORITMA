#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int a;
char nama[5][20];
int nilai1[5];
int nilai2[5];
int hasil[5];

for(a=1;a<=2;a++){
cout<<"Data Ke - "<<a<<endl;
cout<<"Nama Siswa : ";
cin >> nama[a];
  cout<<"Nilai MidTest : " ; 
  cin>>nilai1[a];
  cout<<"Nilai Final : "; 
  cin>>nilai2[a];
}
  for(a=1;a<=2;a++){
  
  hasil[a] = (nilai1[a]+nilai2[a])/2;
  cout<<endl;
    }
  cout<<"------------------------------------------"<<endl;
cout<<"No. Nama Siswa \t\t Nilai \tNilai\tHasil"<<endl;
cout<<" \t\t\t\tMidTest Final   Ujian"<<endl;
cout<<"------------------------------------------"<<endl;
for(a=1;a<=2;a++)
{
cout<<setiosflags(ios::left)<<setw(4)<<a;
cout<<setiosflags(ios::left)<<setw(20)<<nama[a];
cout<<nilai1[a] <<"      ";
cout<<nilai2[a] <<"      ";
cout<<hasil[a] <<"              "<<endl;
}
cout<<"------------------------------------------"<<endl;
getchar();
}