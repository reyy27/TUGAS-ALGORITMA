#include <iostream>
using namespace std;

int main(){
    int bilangan [100],y,a,bil,jumlah=0,b;

    cout <<"Masukkan jumlah bilangan = ";
    cin >> y;

    for (b=0;b<y;b++){
        cout <<"Masukkan Indeks ke-"<<b<<" : ";
        cin >> bilangan[b];
    }

    cout <<"Deretan bilangan adalah = ";
    for (b=0;b<y;b++){
        cout <<bilangan[b]<< " ";
    }

    cout <<"\nMasukkan bilangan yang akan dicari : ";
    cin >>bil;

    for (b=0;b<y;b++){
        if (bilangan[b] == bil){
            cout <<"Bilangan " <<bil<< " ditemukan pada indeks ke : " <<b;
            break;
        }
    }

    for (b=0;b<y;b++){
        if (bilangan[b] == bil){
            jumlah++;
        }
    }
    cout <<"\nBilangan "<<bil<< " ditemukan sebanyak "<<jumlah<<" kali";

    return 0;

}