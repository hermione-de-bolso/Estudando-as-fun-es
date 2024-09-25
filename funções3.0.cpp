// Programa para mostrar uma lista de numeros

#include <iostream>

using namespace std;

// Primeira parte
void exibirValores(int N) {
    for (int i = 0; i <= N; ++i)
    {
     cout << i << endl;
    }
}

// Programa principal
int main() {
    int N;

    cout << "Digite um valor inteiro positivo N: ";
    cin >> N;

    // Verifica se o valor é positivo
    if (N < 0)
    {
    cout << "Por favor, insira um valor inteiro positivo." << endl;
        return 1;
    }

    exibirValores(N);

    return 0;
}
 
