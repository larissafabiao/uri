#include <iostream>

using namespace std;

int main(){
    double n, media = 0, validos = 0;

    while(true){
        cin >> n;
        if(n > 10 || n < 0){
            cout << "nota invalida" << endl;
        } else {
            media += n;
            validos++;
        }
        if(validos == 2){
            break;
        }
    }

    media = media / 2;

    cout.precision(2);
    cout << "media = " << fixed << media << endl;

    return 0;
}
