#include <iostream>
using namespace std;

struct buku
{
   // Komponen
   string judul, pengarang;
   int tahunTerbit;
   buku *next;
};
buku *head, *tail, *cur, *newNode, *del;
void createSingleLingkedlist (string judul, string pengarang, int tahunTerbit){
   head = new buku();
   head ->judul = judul;
   head ->pengarang = pengarang;
   head ->tahunTerbit = tahunTerbit;
   head ->next = NULL;
   tail = head;
}
// Add first single linked list
void addFisrt(string judul, string pengarang, int tahunTerbit){
   newNode = new buku();
   newNode ->judul = judul;
   newNode ->pengarang = pengarang;
   newNode ->tahunTerbit = tahunTerbit;
   newNode ->next = head;
   head = newNode;
}

// Add in last single lingked list
void addLast(string judul, string pengarang, int tahunTerbit){
   newNode = new buku();
   newNode ->judul = judul;
   newNode ->pengarang = pengarang;
   newNode ->tahunTerbit = tahunTerbit;
   newNode ->next = NULL;
   tail ->next =  newNode;
   tail = newNode;
}
// Remove first linked list
void removeFirst(){
   del = new buku();
   head = head ->next;
   delete del;
}
void printSingleLingkedList(){
   cur = head;
   while (cur != NULL)
   {
      cout << "Judul Buku Node  \t\t: " << cur ->judul << endl;
      cout << "Pengarang Buku Node  \t\t: " <<  cur ->pengarang << endl;
      cout << "Tahun Terbit Buku Node  \t: " <<cur ->tahunTerbit << endl;
      cout << endl;
      cur = cur ->next;
   } 
}


int main(){
   // system("cls");
  // Print single lingked list
   cout << "Add First Node \n---------\n";
   createSingleLingkedlist("Terbenam", "Syahid", 1990);
   printSingleLingkedList();

   // add list di first lingked list
   cout<<endl;
   cout << "Add New First Node \n-----------\n";
   addFisrt("Maling Kundang", "Dian sastro", 1991);
   printSingleLingkedList();

   // add list di last lingked list
   cout<<endl;
   cout << "Add linked list in last node \n-----------\n";
   addLast("Si kancil", "Khaerun Nissa", 2002);
   printSingleLingkedList();

   // delate list di last lingked list
   cout<<endl;
   cout << "Remove First Node \n-----------\n";
   removeFirst();
   printSingleLingkedList();

}
