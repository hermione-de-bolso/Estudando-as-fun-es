//Programa de funçoes

// Incluir bibliotecas
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

// Criar uma função base ao quadrado
int Expoente_2(int N)
{
    // Variáveis internas
    int operacao;
    operacao = N * N;

    return operacao;
}

// Programa principal
int main(void) // O main é uma função de entrada vazia
{
    // Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    // Entrada
    int A;
    cout << "\n\nEntre com um número inteiro: ";
    cin >> A;

    // Operações
    int resultado;
    resultado = Expoente_2(A);

    // Saída
    cout << "\n\nResultado = " << resultado << endl;

    // Finalizar programa
    return 0;
}

