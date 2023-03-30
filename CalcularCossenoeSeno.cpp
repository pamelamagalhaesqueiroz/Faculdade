#include <iostream>
#include <cmath>
using namespace std;
// 1 - pedir um angulo para o usuario.
int main()
{
    double anguloGraus, anguloRadiano, cosseno3Termos, seno3Termos, cosseno40Termos, seno40Termos, tetha, soma;
    cout << "Digite um ângulo em graus";
    cin >> anguloGraus;

    // 2 - converter o angulo de graus para radiano e definir o theta.
    anguloRadiano = anguloGraus * M_PI / 180; // M_PI é da biblioteca cmath já sabendo o valor de pi.
    tetha = anguloRadiano;

    // 3 - calcular 3 termos de cosseno e seno.

    double termoCos1 = 1;
    double termoCos2 = pow(tetha, 2) / 2;
    double termoCos3 = pow(tetha, 4) / 24; // 24 é a 4!
    cosseno3Termos = termoCos1 - termoCos2 + termoCos3;
    cout << "A soma de 3 termos de cosseno é " << cosseno3Termos << endl;
    double termoSen1 = tetha;
    double termoSen2= pow(tetha, 3) / 3;
    double termoSen3 = pow(tetha, 5) / 120; // 120 é 5!
    seno3Termos = termoSen1 - termoSen2 + termoSen3;
    cout << "A soma de 3 termos de seno é " << seno3Termos << endl;

    // 4 - calcular 40 termos de cosseno.
    for (int i = 1; i <= 40; i++)
    {
        double denominador = 2 * i * (2 * i - 1);                              // calcula o denominador
        double cosseno40Termos = pow(-1, i) * pow(tetha, 2 * i) / denominador; // calcula o valor do termo
        soma += cosseno40Termos;                                               // acumula o valor de cada termo na variável soma
        cout << "A soma de 40 termos de cosseno é" << cosseno40Termos << endl;
    }
    for (int i = 1; i <= 40; i++)
    {
        double denominador = 2 * i * (2 * i - 1);                           // calcula o denominador
        double seno40Termos = pow(-1, i) * pow(tetha, 2 * i) / denominador; // calcula o valor do termo
        soma += seno40Termos;                                               // acumula o valor de cada termo na variável soma
        cout << "A soma de 40 termos de seno é" << seno40Termos << endl;
    }
    // 5 - utilizar as funções cos() e sin() com o angulo dado pelo usuário e imprimir os valores.
    int cos3Termoscmath = cos(anguloRadiano);
    int sen3Termoscmath = sin(anguloRadiano);
    cout << "O valor do seu ângulo em cosseno utilizando a biblioteca cmath é", cos3Termoscmath;
    cout << "O valor do seu ângulo em seno utilizando a biblioteca cmath é", sen3Termoscmath;
    // 6 - calcular o erro em valores absolutos e porcentagem em 3 termos com a formula de cos() e sin().
    int erro3TermosCos = abs(cos3Termoscmath - cosseno3Termos / 100); // abs é para o calculo de valores absolutos é /100 é pra deixar em porcetagem.
    int erro3TermosSen = abs(sen3Termoscmath - seno3Termos / 100);
    cout << "O valor do erro de 3 termos calculados dos cossenos é " <<  erro3TermosCos << endl;
    cout << "O valor do erro de 3 termos calculados dos senos é " << erro3TermosSen << endl;
    // 7 - calcular o erro em valores absolutos e porcentagem em 40 termos com a formula de cos() e sin().
    int erro40TermosCos = abs(cosseno3Termos - cosseno40Termos / 100);
    int erro40TermosSeno = abs(seno3Termos - seno40Termos / 100);
    cout << "O valor do erro de 40 termos calculados dos cossenos é" << erro40TermosCos << endl;
    cout << "O valor do erro de 40 termos calculados dos senos é" << erro40TermosSeno << endl;
}