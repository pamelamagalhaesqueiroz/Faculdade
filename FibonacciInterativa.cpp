#include <iostream>
using namespace std;

int main() {
   int n, i = 0, j = 1, nextTerm;
   cout << "Digite o número de termos que você deseja imprimir: ";
   cin >> n;

   cout << "Série de Fibonacci: ";

   for (int k = 1; k <= n; ++k) {
      if (k == 1) {
         cout << i << ", ";
         continue;
      }
      if (k == 2) {
         cout << j << ", ";
         continue;
      }
      nextTerm = i + j;
      i = j;
      j = nextTerm;
      cout << nextTerm << ", ";
   }
   return 0;
}