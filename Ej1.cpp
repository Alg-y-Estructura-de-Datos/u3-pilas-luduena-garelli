#include <iostream>
#include <stack>

/* Escriba un programa que introduzca una palabra y utilice una pila para imprimir la misma
palabra invertida. */

using namespace std;

void invertirPalabra(string palabra)
{
  stack<char> pila;

  for (int i = 0; i < palabra.size(); i++)
  {
    pila.push(palabra[i]);
  }

  while (!pila.empty())
  {
    cout << pila.top();
    pila.pop();
  }

  cout << endl;
}

int main(int argc, char const *argv[])
{
  string palabra;

  cout << "Ingrese una palabra: ";
  cin >> palabra;

  invertirPalabra(palabra);
  return 0;
}
