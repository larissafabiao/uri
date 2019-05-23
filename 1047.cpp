#include <iostream>

using namespace std;

int main(){
    int hi, mi, hf, mf, horas = 0, minutos = 0;
    cin >> hi >> mi >> hf >> mf;

     if (hi == hf && mi == mf) {
        horas = 24;
        minutos = 0;
    } else if ( hi <= hf && mi <= mf){
        horas = hf - hi;
        minutos = mf - mi;
    } else if( hi < hf && mf <= mi){
        if (hf == hi + 1){
            horas = 0;
        } else {
            horas = hf - hi;
        }
        minutos = 60 - (mi - mf);
    } else if ( hf < hi && mi <= mf){
        horas = (24 - hi) + hf;
        minutos = mf - mi;
    } else if( hf < hi && mf <= mi){
        horas = (24 - hi) + hf;
        minutos = (60 - mi)  + mf;
    } else if ( hi ==  hf && mf < mi){
        horas = 24;
        minutos = (60 - mi)  + mf;
    }
    cout << "O JOGO DUROU " << horas << " HORA(S) E " << minutos << " MINUTO(S)" << endl;
    return 0;
}
