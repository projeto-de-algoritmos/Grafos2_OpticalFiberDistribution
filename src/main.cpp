#include <iostream>
#include <unistd.h>

#include "../inc/Engine.h"

int main() {
 
  Engine teste;

  teste.printMap();

  teste.primAlgorithm(20);

  sleep(2);

  teste.printMap();

  std::cout << "Olá mundo" << '\n';

  return 0;

}
