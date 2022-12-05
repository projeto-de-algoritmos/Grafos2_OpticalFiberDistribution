#include <iostream>

#include "../inc/Map2D.h"

int main() {

  Map2D teste;

  teste.generateNodes();
  teste.printMap();

  std::cout << "Olá mundo" << '\n';

  return 0;

}
