#include <iostream>

using namespace std;

int main () {
    int A, B, C;
    cin >> A >> B >> C;

    if (A > B && A > C && B > C){
        //A, B C
        cout << C << endl << B << endl << A << endl << endl;
    }else if ( A > B && A > C && C > B ) {
        //A, C, B
        cout << B << endl << C << endl << A << endl << endl;
    }else if ( B > C && B > A && C > A) {
        //B C A
        cout << A << endl << C << endl << B << endl << endl;
    }else if ( B > C && B > A && A > C) {
        //B A C
        cout << C << endl << A << endl << B << endl << endl;
        // C A B
    }else if ( C > B && C > A && A < B) {
        //C B A
        cout << A << endl << B << endl << C << endl << endl;
    }

    cout << A << endl << B << endl << C << endl;

    return 0;
}
