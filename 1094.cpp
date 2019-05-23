#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    double quantia = 0, ra = 0, sa = 0, co = 0, cobaias = 0;
    double pcoelhos = 0, pratos = 0, psapos = 0;
    string tipo;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> quantia >> tipo;

        if (tipo == "R"){
            ra = ra + quantia;
        }else if(tipo == "S"){
            sa = sa + quantia;
        }else if( tipo == "C"){
            co = co + quantia;
        }

        cobaias = cobaias + quantia;
    }

    pcoelhos = (co / cobaias) * 100.00;
    pratos = (ra / cobaias) * 100.00;
    psapos = (sa / cobaias) * 100.00;

    cout.precision(2);
    cout << "Total: " << (int) cobaias  << " cobaias" << endl;
    cout << "Total de coelhos: " << (int) co << endl;
    cout << "Total de ratos: " <<(int) ra << endl;
    cout << "Total de sapos: " << (int) sa << endl;
    cout << "Percentual de coelhos: " << fixed << pcoelhos << " %"<< endl;
    cout << "Percentual de ratos: " << fixed << pratos << " %" << endl;
    cout << "Percentual de sapos: " << fixed << psapos << " %" << endl;
    return 0;
}
