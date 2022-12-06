#include <iostream>
#include <unistd.h>

#include "../inc/Graph.h"

int main() {

  Graph teste;

  teste.addEdge(1, 2, 52);
  teste.addEdge(2, 3, 61);
  teste.addEdge(1, 18, 154);
  teste.addEdge(18, 19, 53);
  teste.addEdge(19, 2, 171);
  teste.addEdge(3, 4, 64);
  teste.addEdge(3, 20, 165);
  teste.addEdge(20, 19, 67);
  teste.addEdge(20, 21, 57);
  teste.addEdge(21, 4, 159); 

  teste.printMap();

  teste.primAlgorithm(20);

  sleep(2);

  teste.printMap();

  std::cout << "Olá mundo" << '\n';

  return 0;

}
