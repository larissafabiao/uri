#include <iostream>
#include <string>

using namespace  std;

int main(){
    double M[12][12], soma = 0, media = 0;
    string conta;

    cin >> conta;

    for(int i = 0; i < 12; i++){
        for(int j =0; j < 12; j++){
            cin >> M[i][j];
        }
    }

    for(int i = 0; i < 12; i++){
        for(int j = i+1; j < 12; j++){
            soma += M[i][j];
        }
    }

    cout.precision(1);

    if(conta == "M"){
        media = soma / 66.0;
        cout << fixed << media << endl;
    } else {
        cout << fixed << soma << endl;
    }
    return 0;
}
