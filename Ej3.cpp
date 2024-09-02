#include <iostream>
#include <stack>

/*
Crear una función que reciba una pila por referencia y un número. La función debe sacar la
primera ocurrencia de dicho valor de la pila sino se repite el valor en la pila, de lo contrario
debe eliminar todos los valores repetidos a excepción de la primera ocurrencia. Si el valor no
se encuentra en la pila muestra un mensaje indicando que no pertenece a la pila. Imprimir la
pila al final para verificar si hubo o no modificaciones.
*/

using namespace std;

void Remover(std::stack<int> &p, int valor)
{
  std::stack<int> tempStack;
  bool found = false;
  int count = 0;

  // Contamos cuántas veces aparece el valor en la pila original
  while (!p.empty())
  {
    if (p.top() == valor)
    {
      count++;
    }
    tempStack.push(p.top());
    p.pop();
  }

  // Si el valor no se encuentra en la pila, mostramos un mensaje
  if (count == 0)
  {
    std::cout << "El valor " << valor << " no pertenece a la pila." << std::endl;
  }

  // Reconstruimos la pila original mientras eliminamos las ocurrencias adicionales del valor
  while (!tempStack.empty())
  {
    if (tempStack.top() == valor)
    {
      if (found)
      {
        tempStack.pop();
        continue; // Eliminar la ocurrencia repetida
      }
      else
      {
        found = true; // Mantener la primera ocurrencia
      }
    }
    p.push(tempStack.top());
    tempStack.pop();
  }

  // Mostrar la pila final
  std::stack<int> displayStack = p; // Hacemos una copia para no modificar la pila original
  std::cout << "Pila final: ";
  while (!displayStack.empty())
  {
    std::cout << displayStack.top() << " ";
    displayStack.pop();
  }
  std::cout << std::endl;
}

int main()
{
  std::stack<int> p;

  // Llenamos la pila con los valores del ejemplo
  p.push(9);
  p.push(3);
  p.push(5);
  p.push(2);
  p.push(3);
  p.push(3);

  // Llamada a la función Remover
  Remover(p, 3); // Aquí puedes cambiar el valor para probar otros casos

  return 0;
}