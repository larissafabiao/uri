#include <iostream>

using namespace std;

int main(){
    int n = 0, x = 0, y = 0, soma = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x >> y;
        soma = 0;
        if (x > y){
            int a = x, b = y;
            y = a;
            x = b;

        }
        if ( x == y || y == (x + 1)){
            soma = 0;
        } else {
            x++;
            while ( x < y){
                if ( x % 2 != 0){
                    soma += x;
                }

                x++;
            }
        }
        cout << soma << endl;
    }
}
