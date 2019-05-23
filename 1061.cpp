#include <iostream>

using namespace std;

int main (){
    char palavra[20];
    int di, hi, mi, si, df, hf, mf, sf, w, x, y, z, rt, rm;
    cin >> palavra >> di;
    cin >> hi >> palavra >> mi >> palavra >> si;
    cin >> palavra >> df;
    cin >> hf >> palavra >> mf >> palavra >> sf;

    //dias
    w = df - di;

    //horas
    x = hf - hi;

    if (x < 0){
        x = 24 + (hf - hi);
        w--;
    }

    //minutos
    y = mf - mi;

    if (y < 0){
        y = 60 + (mf - mi);
        x--;
    }

    //segundos
    z = sf - si;

    if (z < 0){
        z = 60 + (sf - si);
        y--;
    }

    cout << w << " dia(s)" << endl;
    cout << x << " hora(s)"<< endl;
    cout << y << " minuto(s)" << endl;
    cout << z << " segundo(s)" << endl;
    return 0;
}

