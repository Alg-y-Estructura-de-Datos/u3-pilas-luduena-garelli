#include <iostream>
#include "Pila/Pila.h"
using namespace std;

void RemplazarValor(Pila<int> &p, int n1, int n2)
{
    Pila<int> aux;
    int auxnum;
    while (!p.esVacia())
    {
        auxnum = p.pop();
        if (auxnum == n1)
        {
            aux.push(n2);
        }
        else
        {
            aux.push(auxnum);
        }
    }
    while (!aux.esVacia())
    {
        auxnum = aux.pop();
        p.push(auxnum);
    }
}

void Leer(Pila<int> datos)
{
    while (!datos.esVacia())
    {
        cout << datos.pop();
    }
}

int main()
{
    Pila<int> datos;
    datos.push(9);
    datos.push(3);
    datos.push(5);
    datos.push(2);
    datos.push(3);
    datos.push(3);
    RemplazarValor(datos, 3, 1);
    Leer(datos);
    return 0;
}
