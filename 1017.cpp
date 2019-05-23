#include <iostream>
using namespace std;

int main(){
    int tempov, vm, distancia;
    double consumo;

    cin >> tempov >> vm;

    // Para encontrar a distancia: velocidade média * tempo de viagem
    distancia = tempov * vm;

    // Para calcular o consumo precisamos dividir a distancia viajada pela km/l do carro
    consumo = distancia / 12.0;

    cout.precision(3);
    cout << fixed << consumo << endl;
    return 0;
}
