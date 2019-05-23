#include <iostream>

using namespace std;

int main(){
    int a = 1, b = 1, sum = 0;

    while (true){
        cin >> a >> b;
        if ( b <= 0 || a <= 0){
            break;
        }
        if (b > a){
            int x = a, y = b;
            a = y;
            b = x;
        }
        while ( b <= a){
            cout << b << " ";
            sum += b;
            b++;
        }
        cout << "Sum=" << sum << endl;
        sum = 0;
    }
}
