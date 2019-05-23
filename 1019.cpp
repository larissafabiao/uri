#include <iostream>

using namespace std;

int main() {
    int N, segundos, minutos, horas, d;
    cin >> N;

    if ( N < 60) {
    //caso N seja menor do que um minuto
        segundos = N;
        minutos = 0;
        horas = 0;
        cout << horas << ":" << minutos << ":" << segundos << endl;
    } else if( N < 3600){
    //caso N seja maior do que 1 minuto e menor do que uma hora
        segundos = N % 60;
        minutos = N / 60;
        horas = 0;
        cout << horas << ":" << minutos << ":" << segundos << endl;
    } else if (N >= 3600) {
    //caso N maior do que uma hora
        segundos = N % 60;
        d = N / 60;
        minutos = d % 60;
        horas = N/3600;
        cout << horas << ":" << minutos << ":" << segundos << endl;
    }
    return 0;
}
