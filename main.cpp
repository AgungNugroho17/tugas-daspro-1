#include <iostream>

using namespace std;

int main(){
int r = 0, s = 1, t = 0, u = 2;
int j[3][2][2];
float rata_rata;

for (int n = 0; n < 3; n++){
    for (int h = 0; h < 2; h++){
        for (int k = 0; k < 2; k++){
            j[n][h][k] = u;
            u += 2;
            cout << u << " ";
            t += u;
            r += s;
            rata_rata = (float) t / r;
        }
    }
}
cout << endl;
cout << "Sum Kelipatan 4 = " << t << endl;
cout << "Rata - Rata Sum Kelipatan 4 = " << rata_rata << endl;

    return 0;
}
