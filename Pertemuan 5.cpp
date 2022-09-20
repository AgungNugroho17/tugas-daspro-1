#include <iostream>

using namespace std;

int main(){

//LUAS LINGKARAN//
  float a, r;
  const float phi = 3.14;

  cout << "Yuk hitung Luas Lingkaran\n";
  cout << "Masukkan jari-jari lingkaran: ";
  cin >> r;
  a = phi*r*r;
  cout << "Luas Lingkaran-nya adalah "<< a << endl;

  //LUAS PERSEGI PANJANG//
  float p, l;
  
  cout<< "Yuk hitung Luas Persegi panjang\n";
  cout<<"Masukkan Panjang Persegi: ";
  cin >> p;
  cout << "\n Masukkan Lebar Persegi: ";
  cin >> l;
  a =p*l;
  cout << "Luas Persegi panjang-nya adalah "<< a << endl;

  return 0;
}

