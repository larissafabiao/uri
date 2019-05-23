#include <iostream>

using namespace std;

int main(){
    int n;
    double x, y, d = 0;

    cin >> n;

    for(int i = 0; i < n; i ++){
        cin >> x >> y;
        if(y == 0){
            cout << "divisao impossivel" << endl;
        } else {
            cout.precision(1);
            d = x / y;
            cout << fixed << d << endl;
        }
    }
    return 0;
}
