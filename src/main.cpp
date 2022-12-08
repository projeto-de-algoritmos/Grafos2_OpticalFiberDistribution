#include <iostream>
#include <unistd.h>

#include "../inc/Engine.h"

int main() {
 
  Engine teste;

    int menu{};
    int no{};
    int no1{};
    int no2{};
    int distancia{};
    int valor{};

    system("clear");

    while (true) {
        std::cout << "Escolha uma opção: " << '\n';
        std::cout << "1. Imprimir mapa" << '\n';
        std::cout << "2. Gerar mapa com nó inicial " << '\n';
        std::cout << "3. Mudança de atributos do mapa" << '\n';
        std::cout << "4. Limpar mapa" << '\n';

        std::cout << "0. Sair" << '\n';

        std::cin >> menu;

        switch (menu) {
            case 1 :
  				teste.printMap();


                std::cin.ignore();
                std::cin.ignore();
                break;
            case 2 :


                std::cout << "Digite um nó de 1 a 105 para iniciar: ";
                std::cin >> no;

  				teste.clearMap();

                valor = teste.primAlgorithm(no);
                teste.printMap();

                std::cin.ignore();

                std::cout << "A quantidade de metros de cabo necessarios é de: " << valor << "m" << '\n';

                std::cin.ignore();
                std::cin.ignore();

                break;
            case 3 :

                std::cout << "Esse modo serve para modificar os valores de distancias dos nó conforme o mapa" << '\n';

				std::cout << "Digite o nó 1: ";
				std::cin >> no1;

				std::cout << "Digite o nó 2: ";
				std::cin >> no2;

				std::cout << "Digite a distancia (1 - 10000): ";
				std::cin >> distancia;

				teste.cleanVector(no1, no2);
                teste.addEdge(no1 , no2, distancia);

                std::cout << "Digite um nó de 1 a 105 para iniciar: ";
                std::cin >> no;

                teste.clearMap();

                valor = teste.primAlgorithm(no);
                teste.printMap();

                std::cin.ignore();

                std::cout << "A quantidade de metros de cabo necessarios é de: " << valor << "m" << '\n';

                std::cin.ignore();
                std::cin.ignore();


                std::cin.ignore();
                break;
            case 4:
                teste.clearMap();
                break;
            case 0 :


                return 0;


                break;
            default:
            std::cout << "Escolha invalida!" << '\n';
            break;
        }
    }


  return 0;

}
