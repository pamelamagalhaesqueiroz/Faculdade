// Trabalho de Técnicas de Programção e Laboratório de Técnicas de Programação.
// Alunos: Pamela Magalhães de Queiroz e Rafael Henrique Geres.
#include <iostream>
#include <cmath>
using namespace std;
// 00 - Pedir para o usuário um angulo.
int main(){
    double anguloGraus, anguloRadiano, cosseno3Termos, seno3Termos, cosseno40Termos, seno40Termos, theta, soma;
    cout << "Digite um angulo em graus:  ";
    cin >> anguloGraus;

    // 01 - Converter o ângulo de graus para radiano e definir o theta.
    anguloRadiano = anguloGraus * M_PI / 180;
    theta = anguloRadiano;

    // 02 -  Calcular 3 termos de cosseno e seno.
    double termoCos1 = 1;
    double termoCos2 = pow(theta, 2) / 2;
    double termoCos3 = pow(theta, 4) / 24; // 24 é a 4!.
    cosseno3Termos = termoCos1 - termoCos2 + termoCos3;
    cout << "A soma de 3 termos de cosseno e:  " << cosseno3Termos << endl;

    double termoSen1 = theta;
    double termoSen2 = pow(theta, 3) / 6;
    double termoSen3 = pow(theta, 5) / 120; // 120 é 5!.
    seno3Termos = termoSen1 - termoSen2 + termoSen3;
    cout << "A soma de 3 termos de seno e:  " << seno3Termos << endl;

    // 03 - Calcular 40 termos de cosseno e seno.
    for (int i = 1; i <= 40; i++){
        double denominador = 2 * i * (2 * i - 1);                     
        cosseno40Termos += pow(-1, i) * pow(theta, 2 * i) / denominador; // pow é para calcular um potencia.
        seno40Termos += pow(-1, i) * pow(theta, 2 * i - 1) / (2 * i); 
        }
    cout << "A soma de 40 termos de cosseno e:  " << cosseno40Termos << endl;
    cout << "A soma de 40 termos de seno e:  " << seno40Termos << endl;

    // 04 - Utilizar as funções cos() e sin() com o ângulo dado pelo usuário e imprimir os valores.
    double cos3Termoscmath = cos(anguloRadiano);
    double sen3Termoscmath = sin(anguloRadiano);
    cout << "O valor do seu angulo em cosseno utilizando a biblioteca cmath e:  " << cos3Termoscmath << endl;
    cout << "O valor do seu angulo em seno utilizando a biblioteca cmath e:  " << sen3Termoscmath << endl;

    // 05 - Calcular o erro em valores absolutos e porcentagem em 3 termos com a fórmula de cos() e sin().
    double error3TermosCos = abs(cos3Termoscmath - cosseno3Termos) /  100; //abs é pra calcular o valor absoluto /100 para transformar em porcentagem.
    double error3TermosSen = abs(sen3Termoscmath - seno3Termos) /  100;
    cout << "O valor do erro de 3 termos calculados dos cossenos e:  " << error3TermosCos << "%" << endl;
    cout << "O valor do erro de 3 termos calculados dos senos e:  " << error3TermosSen << "%" << endl;

    // 06 - Calcular o erro em valores absolutos e porcentagem em 40 termos com a fómula de cos() e sin().
    double error40TermosCos = abs(cos3Termoscmath - cosseno40Termos) / 100;
    double error40TermosSen = abs(sen3Termoscmath - seno3Termos) /  100;
    cout << "O valor do erro de 40 termos calculados dos cossenos e:  " << error40TermosCos << "%" << endl;
    cout << "O valor do erro de 40 termos calculados dos senos e:  " << error40TermosSen << "%" << endl;
}