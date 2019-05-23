#include <iostream>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        if ( x % 2 == 0 && x != 0 ){
            cout << "EVEN ";
        } else if ( x == 0 ){
            cout << "NULL" << endl;
        } else {
            cout << "ODD ";
        }
        if ( x > 0 ){
            cout << "POSITIVE" << endl;
        } else if ( x < 0) {
            cout << "NEGATIVE" << endl;
        }
    }
    return 0;
}
