#include <iostream>

using namespace std;

#define DIR   0
#define BAIXO 1
#define ESQ   2
#define CIMA  3

int n, l, c;
int direcaoAtual = DIR;
int quantosPassos = 1;
int passosDados = 0;

bool estaNaMatriz() {
   return l >= 0 && l < n && c >= 0 && c < n;
}

void mudaDirecao() {
   switch (direcaoAtual) {
      case DIR:
         direcaoAtual = BAIXO;
         break;

      case BAIXO:
         direcaoAtual = ESQ;
         quantosPassos++;
         break;

      case ESQ:
         direcaoAtual = CIMA;
         break;

      case CIMA:
         direcaoAtual = DIR;
         quantosPassos++;
   }
}

void anda() {
   if(quantosPassos == passosDados){
      passosDados = 0;
      mudaDirecao();
   }

   passosDados++;
   switch (direcaoAtual) {
      case DIR:
         c++;
         break;

      case ESQ:
         c--;
         break;

      case BAIXO:
         l++;
         break;

      case CIMA:
         l--;
   }
}

int main() {
   int matriz[10][10];
   int coord = 1, contDentro = 0, contTotal = 0;
   cin >> n >> l >> c;
   int qtdCoordsDaMatriz = n * n;

   for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
         matriz[i][j] = coord++;
      }
   }

   int direcaoAtual = DIR;
   int quantosPassos = 1;
   int passosDados = 0;

   while(true) {
      contTotal++;

      if(estaNaMatriz()) {
         contDentro++;
         cout << matriz[l][c];

         if(contDentro == qtdCoordsDaMatriz) {
            break;
         } else {
            cout << " ";
         }
      }

      anda();
   }

   cout << endl;
   cout << contTotal << endl;
}
