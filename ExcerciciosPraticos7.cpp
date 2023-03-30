//Exercício 01
#include <iostream>
using namespace std;

int qntos_k(int n, int k){
    if (n == 0){
        return 0;
    }
    else if (n % 10 == k){
        return 1 + qntos_k(n/10, k);
    }
    else {
        return qntos_k(n/10, k);
    }
}

int main(){
    int n = 233222992772;
    int k = 2;
    int c = qntos_k(n, k);

    cout << "O digito " << k << " aparece " << c << " vezes em " << n << endl;

    return 0;
}

//Exercício 02
#include <iostream>
using namespace std;

int paraBinario (int n){
	if (n / 2 != 0) {
		paraBinario(n / 2);
	}
	cout << n % 2;
}

int main(){
	 int decimal = 209;
	 
	paraBinario(decimal);
	
	return 0;
}

//Exercício 03
#include <iostream>
using namespace std;

int MDC (int x , int y) {
    if (x == y)
    return   x;
    if (x > y){
    return MDC (x - y, y);
    }
    else{
        return MDC (x, y);
        
    }
}

int main (){
    int x = 1;
    int y = 2;
    cout << MDC << endl;
    return 0;
}

//Exercício 04
#include <iostream>
using namespace std;

int MDC (int x , int y){
    if (x-y) return 0;
    if (x<y) return x;
    else return MDC (x-y, y);
}

//Desafio
#include <iostream>
using namespace std;

void merge (ubt v1 [], int n1, int v2[], int n2, int v3[]){
    if (n1 == 0 && n2 == 0)
    return;
    if (n1==0){
        v3[0] = v2[0];
        merge(v1, n1, ++v2, --n2, ++v3);
    }
    else if (n2 == 0){
        v3[0] = v1[0];
        merge(++1, --n1, v2, n2, ++v3);
    }
    else if (v1[0] <= v2[0]){
        v3[0] = v1[0];
        merge(++v1, --n1, v2, n2, ++v3);
    }
    else v3[0] = v2[0];
    merge(v1, n1, ++v2)
}

int main(){
    int v1[5] {2,4,6,8,10};
    int v2[5] {1,3,5,7,9};
    int v3[10];


}
