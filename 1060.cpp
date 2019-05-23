#include <iostream>

using namespace std;

int main (){
    double n, positivo = 0;

    for(int i = 0; i < 6; i++){
        cin >> n;
        if(n > 0.00){
            positivo++;
        }
    }

    cout << positivo << " valores positivos" << endl;
    return 0;
}
