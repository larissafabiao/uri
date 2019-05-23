#include <iostream>

using namespace std;

double media = 0.0;

double calculoMedia(){
    int validas = 0;
    double n;

    while(validas < 2){
        cin >> n;
        if(n >= 0 && n <=10){
            validas++;
            media +=n;
        }else{
            cout << "nota invalida" << endl;
        }
    }

    media = media / 2.0;
    return media;
}
int main(){
    int repetir;
    do {
        repetir = 0;
        calculoMedia();

        cout.precision(2);
        cout << "media = " << fixed << media << endl;

        media = 0.0;

        while(repetir != 1 && repetir != 2){
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> repetir;
        }

    } while (repetir == 1);


    return 0;
}
