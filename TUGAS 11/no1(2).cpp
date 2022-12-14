#include <iostream>
using namespace std;
int main (){
  int a,*bil;
  bil=&a;
  *bil=200;

  cout << *bil <<" ";
  (*bil)++;
  cout << *bil <<" ";
  (*bil)--;
  cout << *bil <<"\n";

  getchar();
  }
