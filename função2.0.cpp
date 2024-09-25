// Programa de funções

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

// Função para calcular a área de um triângulo retângulo
float Calcular_Triangulo_Area(float a, float b)
{
    // Variável interna
    float Area;

    Area = (a * b) / 2;

    return Area;
}

// Função de exibição de resultado
void Exibir(float r)
{
    cout << "\n\nResultado = " << r << endl;
}

// Programa principal
int main(void)
{
    // Língua portuguesa
    setlocale(LC_ALL, "portuguese");

    // Entrada
    float a, b;
    cout << "\n\nEntre com o lado a: ";
    cin >> a;

    cout << "\n\nEntre com o lado b: ";
    cin >> b;

    // Operações
    float area;
    area = Calcular_Triangulo_Area(a, b);

    // Exibir o resultado
    Exibir(area);

    // Finalizar programa
    return 0;
}
 
