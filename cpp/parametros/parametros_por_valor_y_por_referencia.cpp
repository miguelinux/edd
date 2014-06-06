#include <iostream>

using std::cout;
using std::endl;

void imprime(int n1, float n2) {
  cout << "*************************" << endl;
  cout << "Número 1: " << n1 << endl;
  cout << "Número 2: " << n2 << endl;
}

void parametro_por_valor(int entero, float flotante) {
 
  cout << "*************************\n";
  cout << "Parametro por Valor\n\n";
  imprime(entero, flotante);
  entero = 100;
  flotante = 3.1416f;
  imprime(entero, flotante);
  cout << "Saliendo de parametro por valor" << endl;

}

void parametro_por_referencia(int &entero, float &flotante) {

  cout << "*************************\n";
  cout << "Parametro por Referencia\n\n";
  imprime(entero, flotante);
  entero = -314159235;
  flotante = 6.2832f;
  imprime(entero, flotante);
  cout << "Saliendo de parametro por referencia\n";

}

int main(int argc, char **argv) {

  int   numero1;
  float numero2;

  numero1 = 1;
  numero2 = 2.0f;

  imprime(numero1, numero2);
  parametro_por_valor(numero1, numero2);

  imprime(numero1, numero2);
  parametro_por_referencia(numero1, numero2);

  imprime(numero1, numero2);

  return 0;
}

