//Exercício 01
 #include <iostream>
using namespace std;

double recursiveArraySum(double arr[], int size) {
   if(size == 0) { 
      return 0;
   }
   else {
      return arr[size-1] + recursiveArraySum(arr, size-1); 
   }
}

int main() {
   double arr[] = {3.6, 2.1, 5.4, 1.2, 8.9};
   int n = sizeof(arr)/sizeof(arr[0]);
   double sum = recursiveArraySum(arr, n);
   cout << "Soma da array: " << sum << endl;
   return 0;
}

//Exercício 02
#include<iostream>
using namespace std;

void inverte(int arr[], int inicio, int fim){
    if(inicio >= fim) return; 
    swap(arr[inicio], arr[fim]);
    inverte(arr, inicio+1, fim-1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array original:" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    inverte(arr, 0, n-1);

    cout << "Array invertido:" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

//Exercício 03
#include <iostream>
using namespace std;

int count_k(int n, int k) {
    if (n == 0) {
        return 0;
    } else if (n % 10 == k) {
        return 1 + count_k(n/10, k);
    } else {
        return count_k(n/10, k);
    }
}

int main() {
    int n = 9811426471145811;
    int k = 1;
    int c = count_k(n, k);

    cout << "O digito " << k << " aparece " << c << " vezes em " << n << endl;

    return 0;
}