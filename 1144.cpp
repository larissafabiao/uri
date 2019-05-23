#include <iostream>

using namespace std;

int main() {
    int n, primeiro, segundo, terceiro;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cout << i << " ";
        segundo = i*i;
        terceiro = i*i*i;
        cout << segundo << " ";
        cout << terceiro << endl;
        segundo++;
        terceiro++;
        cout << i << " ";
        cout << segundo << " ";
        cout << terceiro << endl;
    }
    return 0;
}
