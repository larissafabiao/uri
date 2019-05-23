#include <iostream>

using namespace std;

int main(){
    int n, p = 0, m = 0, par[5] = {0}, impar[5] = {0};

    for(int i = 0; i < 15; i++){
        cin >> n;
        if (n % 2 == 0){
            par[p] = n;
            p++;
        } else {
            impar[m] = n;
            m++;
        }

        if ( p == 5 ){
            for(int a = 0; a < 5; a++){
                cout << "par[" << a << "] = " << par[a] << endl;
                par[a] = {0};
            }
            p = 0;
        }

        if ( m == 5 ){
            for(int a = 0; a < 5; a++){
                cout << "impar[" << a << "] = " << impar[a] << endl;
                impar[a] = {0};
            }
            m = 0;
        }

        if ( i == 14){
            for (int b = 0; b < m; b++){
                 cout << "impar[" << b << "] = " << impar[b] << endl;
            }
            for (int b = 0; b < p; b++){
                 cout << "par[" << b << "] = " << par[b] << endl;
            }
        }

    }
    return 0;
}
