#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    /*cout << "loop 1.c" << endl;
    for (int i = 100 , j = 1 ; i>=0 , j<=100 ; i--,j++)
    {
        cout << " i= " << i  ;
        cout << " dan j= " << j<< endl;
    }*/

    /*cout << "loop 2.c"<< endl;
    for (int i = 1 ; i<=100; i++){
        if (i%2 == 1 ){continue;}
        cout << " Nilai Genap Adalah " << i << endl;*/

    /*cout << "loop 3.c"<< endl;
    for(int i = 100 ; i >= 1 ; i--){
        if(i < 55){break;}
    cout<< i <<endl;*/

    /*cout << "loop 4.c" << endl;
    int jumlah = 0;
    for(int i = 1 ; i<=20 ; i++){
        int hasil = i;

        jumlah+=hasil;
        cout << i << endl;

    }
        cout << endl;
        cout << "jumlah= "<<jumlah<<endl;
        cout << "Rata Rata= "<<jumlah/21<<endl;*/

    /*cout << "loop 5.c" << endl;
    cout << "program ini akan berhenti jika anda menginputkan angka -99"<< endl;

    int x;

    cout<<"Masukkan Nilai Anda = ";

    cin >>x;
        while (x!=-99){
           cout<<"Masukkan Nilai Anda = ";
           cin >>x;
        */

   /* cout << "loop 6.c" << endl;
    int x;
    int min;
    int max;

    cin >>x;

        min = 99999999;
        max = -99999999;

        while (x != -99){
            if(x > max){
                max = x;
            }
            if(x < min){
                min = x;
            }

           cin >>x;
        }
        cout<<"Max = "<<max<<endl;
        cout<<"Min = "<<min<<endl;*/

   /* cout << "loop 7.c" << endl;
    int sum = 0;
    int x;
    cout << "Input Bil = ";
    cin >> x ;

        while (x != 9999){
            cout<<x<<endl;
            sum+=x;
            cout<<"Input Bil = ";
            cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;*/

   /* cout << "loop 8.c" << endl;
    int sum=0;
    int x;
    cout<<"Input Bil = ";
    cin >>x;

        while (x != 9999){
            cout<<x<<endl;
            sum+=1;
            cout<<"Input Bil = ";
            cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;*/


   /* cout  << "loop 9.c" << endl;
    int sum=0;
    int cacah=0;
    int x;
    cout<<"Input Bil = ";
    cin >>x;

        while (x != 9999){
            cout<<x<<endl;
            sum+=x;
            cacah+=1;
            cout<<"Input Bil = ";
            cin >>x;

        }
        cout<<"Jumlah Angka = "<<sum<<endl;
        cout<<"Jumlah Cacah Angka = "<<cacah<<endl;*/


   /* cout << "loop 10.c" << endl;
      for(int x=1;x<=7;x++){

        cout<<endl;
        cout<<"Looping Yang Ke-"<<x<<endl;

    for(int y=1;y<=10;y++)
        {cout<<"-Angka "<<y<<"-"<<endl;}}*/

    /* << "loop 11.c" << endl;
    int kali;

    cout << "Input : ";
    cin >> kali;
    for(int x = 1 ; x <= 10 ; x++ ){
        cout<<x<<" x "<<kali<<" = "<<x*kali<<endl;}*/

    /*cout << "loop 12.c" << endl;
    cout << "--------------------------" << endl;
    cout << "  Celcius     Fahrenheit  " << endl;
    cout << "--------------------------" << endl;
    for(float x = 0.00 ; x <= 100 ; x++ ){

        cout << fixed << setprecision(0) << "|    " << x << "     |      "
        << setprecision(1)<< x*1.8 + 32 << "    |" << endl;}*/

   /* cout << "loop 13.c" << endl;
    string branch;
    cout << "   Celcius      Fahrenheit      Keterangan                      " << endl;
    cout <<"-----------------------------------------------------------------" << endl;
    for(float x = 100 ; x >= -40; x-- ){
        if(x!=-40 && x!=-18 && x!=0 && x!=10 && x!=21 && x!=30 && x!=37 && x!=40 && x!=100){
            continue;
        }
        else if(x==100){
            branch = "Air Mendidih";
        }
        else if(x==40){
            branch = "Air Mandi Panas";
        }
        else if(x==37){
            branch = "Temperatur Tubuh ";
        }
        else if(x==30){
            branch = "Cuaca Pantai";
        }
        else if(x==21){
            branch = "Temperatur Ruangan";
        }
        else if(x==10){
            branch = "Hari Yang Dingin";
        }
        else if(x==0){
            branch = "Titik Beku Air";
        }
        else if(x==-18){
            branch = "Cuaca Dingin Bersalju";
        }
        else if(x==-40){
            branch = "Cuaca Sangat Dingin Bersalju";
        }

        cout << fixed << setprecision(0) << "    " <<x<< "            "
        << setprecision(1)<< x*1.8 + 32 <<  "    " <<branch<<endl;
    }*/



    return 0;
}
