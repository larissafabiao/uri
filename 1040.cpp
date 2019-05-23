#include <iostream>

using namespace std;

int main (){
    double N1, N2, N3, N4, N5, media;
    cin >> N1 >> N2 >> N3 >> N4;

    media = (N1 * 0.2) + (N2 * 0.3) + (N3 * 0.4) + (N4 * 0.1);

    cout.precision(1);
    cout << "Media: " << fixed << media << endl;

    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (media >= 5) {
        cout << "Aluno em exame." << endl;

        cin >> N5;
        cout << "Nota do exame: " << N5 << endl;

        media = (media + N5) / 2.0;

        if (media >= 5.0) {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << fixed << media << endl;

        } else {
            cout << "Aluno reprovado." << endl;
        }

    } else {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}
