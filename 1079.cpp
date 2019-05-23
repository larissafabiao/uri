#include <iostream>

using namespace std;

int main(){
    int n;
    double v1, v2, v3, media = 0, soma = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v1 >> v2 >> v3;
        soma = (2.0 * v1) + (3.0 * v2) + (5.0 * v3);
        media = soma / 10.0;
        cout.precision(1);
        cout << fixed << media << endl;
    }
     return 0;
}
