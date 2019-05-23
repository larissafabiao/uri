#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double A, B, C, r1, r2, delta;
    cin >> A >> B >> C;

    cout.precision(5);

    delta = B*B - 4 * A * C;

    if (delta > 0 && (2 * A) != 0){
        r1 = (-B + sqrt(delta)) / (2 * A);
        cout << "R1 = " << fixed << r1 << endl;

        r2 = (-B - sqrt(delta)) / (2 * A);
        cout << "R2 = " << fixed << r2 << endl;
    } else {
        cout << "Impossivel calcular" << endl;
    }
    return 0;
}
