// Versão Iterativa
#include <iostream>
using namespace std;

unsigned int iteFatorial (unsigned int n){
    unsigned int produto = 1,
    
    for (int i = 1, i <= n; i++){
        produto = produto * i,
    }
return produto;
}