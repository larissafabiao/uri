#include <iostream>

using namespace std;

int main (){
    int x, y, soma = 0;
    cin >> x >> y;
    if (y > x){
        int a = x, b = y;
        x = b;
        y = a;
        cout << "X = " << x << " Y = " << y << endl;
    }
    if(y%2 == 0){
        y++;
    } else {
        y += 2;
    }
    while(y < x){
        soma += y;
        y += 2;
    }
    cout << soma << endl;

    return 0;
}
