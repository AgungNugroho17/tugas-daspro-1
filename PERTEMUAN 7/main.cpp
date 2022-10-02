#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int jurusan;

    cout << " Daftar Jurusan "<< endl;
    cout << " 1. Teknik Informatika\n" << endl;
    cout << " 2. Sistem Informasi\n" << endl;
    cout << " 3. Desain Komunikasi Visual\n" << endl;
    cout << " Masukkan Jurusan Anda\n" << endl;
    cin >> jurusan ;
    cout << "\n";

    if ( jurusan == 1 ) {
        cout << "Saya jurusan Teknik Informatika" << endl;
    } else if ( jurusan == 2 ) {
     cout << "Saya jurusan Sistem Informasi" << endl;
     } else if ( jurusan == 3 ) {
     cout << "Desain Komunikasi Visual" << endl;
     }
     cout <<"\n" ;

     int Semester;

     cout << "Semester " << endl;
     cout << " 1. semester 1-2= freshman"<< endl;
     cout << " 2. semester 3-4 = Sophomore"<< endl;
     cout << " 3. semester 5-6 = Junior"<< endl;
     cout << " 4. semester 7-8 = Senior"<< endl;
     cout << " Masukan Semester Anda: ";\
     cin >> Semester ;
     cout << "\n";

     if ( Semester == 1) {
        cout << " saya dalam kategori freshman " << endl;
     } else if ( Semester == 2) {
        cout << " saya dalam kategori Sophomore " << endl;
     } else if ( Semester == 3) {
        cout << " saya dalam kategori junior " << endl;
     } else if ( Semester == 4) {
        cout << " saya dalam kategori senior " << endl;
     }


    return 0;
}
