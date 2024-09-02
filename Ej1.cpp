#include <iostream>
#include "./Pila/Pila.h"
#include <cstring>
using namespace std;

void Invertir(string palabra)
{
    Pila<char> stack;
    for (size_t i = 0; i < palabra.length(); i++)
    {
        stack.push(palabra[i]);
    }
    while (!stack.esVacia())
    {
        cout << stack.pop();
    }
    cout << endl;
}

int main()
{
    string palabra;
    cout << "Ingrese una palabra o frase: " << endl;
    getline(cin, palabra);
    Invertir(palabra);
    return 0;
}
