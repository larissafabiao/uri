#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    unsigned long long fib[t] = {0}, imp[t] = {0};

    fib[0] = 0;
    fib[1] = 1;

    for(int i = 2; i < t; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(int i = 0; i < t; i++){
        cin >> imp[i];
        cout << "Fib(" << imp[i] << ") = " << fib[imp[i]] << endl;
    }
    return 0;
}
