#include <iostream>

using namespace std;

int main(){
    double n, imposto;
    cin >> n;
    if (n <= 2000.00){
        cout << "Isento" << endl;
    } else {
        if (n > 4500.00){
            imposto =((n - 4500.00) * 0.28)+(1500 * 0.18)+(1000*0.08);
        } else if (n <= 4500.00 && n >= 3000.01 ){
            imposto =((n - 3000) * 0.18)+(1000*0.08);
        } else if (n <= 3000.00  && n >= 2000.01){
         imposto =(n - 2000) * 0.08;
        }
        cout.precision(2);
        cout << "R$ " << fixed << imposto << endl;
    }
    return 0;
}
