#include <iostream>
#include <stack>

/*
Escribir una función Reemplazar que tenga como argumentos una pila con tipo de elemento
int y dos valores int: viejo y nuevo de forma que, si el primer valor (viejo) aparece en algún
lugar de la pila, sea reemplazado por el segundo (nuevo)..
*/

using namespace std;

void Reemplazar(stack<int> &pila, int viejo, int nuevo)
{
  stack<int> aux;
  while (!pila.empty())
  {
    if (pila.top() == viejo)
    {
      aux.push(nuevo);
    }
    else
    {
      aux.push(pila.top());
    }
    pila.pop();
  }
  while (!aux.empty())
  {
    pila.push(aux.top());
    aux.pop();
  }
}

int main(int argc, char const *argv[])
{
  stack<int> pila;
  pila.push(3);
  pila.push(8);
  pila.push(3);
  pila.push(3);
  pila.push(1);

  Reemplazar(pila, 3, 5);

  while (!pila.empty())
  {
    cout << pila.top() << endl;
    pila.pop();
  }
  return 0;
}
