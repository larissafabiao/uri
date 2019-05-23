#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double a, b, c, perimetro, area;
    cin >> a >> b >>c;
    cout.precision(1);

    if (fabs(b - c) <  a && a < (b + c) && fabs(a - c) < b && b < (a + c) && fabs(a - b)< c &&  c < (a + b)){
        perimetro = a + b + c;
        cout << "Perimetro = " << fixed << perimetro << endl;
    } else {
        area = ((a + b) * c) / 2.0;
        cout << "Area = " << fixed << area << endl;
    }
    return 0;
}
