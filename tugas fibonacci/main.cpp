#include <iostream>

using namespace std;

int main()
{
    cout << "DERET FIBONACCI" << endl;

    int n,f1 = 0, f2 = 1, berikutnya = 0;

    cout << "input batas deret deret fibonacci : ";
    cin >> n;
        cout<<endl;
    cout << "deret fibonacci :";

    for (int i=1 ; i<=n; ++i)
    {
         //bag1.
        if (i==1)
        {
            cout << " " <<f1<<" ";
            continue;
        }
        if (i==2)
        {
            cout << " " <<f2<<" ";
            continue;
        }
        berikutnya = f1+f2;

        f1 = f2;
        f2 = berikutnya;
        //bag2.
        cout << berikutnya <<" ";

    }
    return 0;
}
