// Programa para comparar tres numeros inteiros

// Incluir bibliotecas
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

// Criar uma função de comparação de numeros
int Menor_Valor (int N1, int N2, int N3)
{
    if (N1<=N2 && N1<=N3)
        return N1;
    if (N2<=N1 && N2<=N3)
        return N2;
    else
        return N3;
}

int main ()
{
    int N1, N2 ,N3;

    cout << "\nEntre com o primeiro numero: ";
    cin >> N1;

    cout << "\n\nEntre com o segundo numero: ";
    cin >> N2;

    cout << "\n\nEntre com o terceiro numero: ";
    cin >> N3;

    int menor = Menor_Valor (N1, N2 ,N3);

    printf ("\n\nMenor valor: %d", menor);

    return 0;
}
