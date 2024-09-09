#include <iostream>
#include "Pila/Pila.h"
using namespace std;

void EliminarValor(Pila<int> &p, int n)
{
    Pila<int> pila_aux;
    int aux_num, cont = 0;

    while (!p.esVacia())
    {
        aux_num = p.pop();
        if (aux_num == n)
        {
            cont++;
        }
        pila_aux.push(aux_num);
    }

    if (cont <= 1)
    {
        while (!pila_aux.esVacia())
        {
            aux_num = pila_aux.pop();
            if (aux_num = !n)
            {
                p.push(aux_num);
            }
        }
    }
    else
    {
        while (cont >= 1 && !pila_aux.esVacia())
        {
            aux_num = pila_aux.pop();
            if (aux_num != n || cont <= 1)
            {
                p.push(aux_num);
            }
            else if (aux_num == n)
            {
                cont--;
            }
        }
    }
}

int main()
{
    Pila<int> datos;
    int num = 3;
    datos.push(3);
    datos.push(3);
    datos.push(2);
    datos.push(5);
    datos.push(3);
    datos.push(9);

    EliminarValor(datos, num);

    while (!datos.esVacia())
    {
        cout << datos.pop() << " --> ";
    }
    cout << endl;

    return 0;
}
