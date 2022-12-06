#include "../inc/Map2D.h"

#include <algorithm>
#include <string>

Map2D::Map2D()
{
    for( int i{0}; i < AXIS_Y ; i++ )
        for( int j{0}; j < AXIS_X ; j++)
        {
            mapSize[i][j] = 0;
            statusStreet[i][j] = 0;
        }
}

Map2D::~Map2D() = default;

void Map2D::printMap() {
    for (int i = 0; i < AXIS_Y; i++) {
        for (int j = 0; j < AXIS_X; j++) {

            if (mapSize[i][j] == 0) {
                std::cout << "   ";
            } else {

            if( mapSize[i][j] == 1 ||
                mapSize[i][j] == 2 ||
                mapSize[i][j] == 3 ||
                mapSize[i][j] == 4 ||
                mapSize[i][j] == 5 ||
                mapSize[i][j] == 6 ||
                mapSize[i][j] == 7 ||
                mapSize[i][j] == 8 ||
                mapSize[i][j] == 9
            ) {
                std::cout << "\x1B[31m0" + std::to_string(mapSize[i][j]) + "\033[0m" + " ";;
            } else
            {   if (mapSize[i][j] == 380) ( statusStreet[i][j] == true ? std::cout <<   "\x1B[34m/  \033[0m" : std::cout << "/  "  );
                    else if (mapSize[i][j] == 381) ( statusStreet[i][j] == true ? std::cout << "\x1B[34m|  \033[0m" : std::cout << "|  "  );
                        else if (mapSize[i][j] == 382) ( statusStreet[i][j] == true ? std::cout << "\x1B[34m\\  \033[0m" : std::cout << "\\  "  );
                            else if (mapSize[i][j] == 383) ( statusStreet[i][j] == true ? std::cout << "\x1B[34m-- \033[0m" : std::cout << "-- "  );
                                else std::cout << "\x1B[31m" + std::to_string(mapSize[i][j]) + "\033[0m" + " ";
            }
            }
        }

        std::cout << '\n';
    }
}

void Map2D::clearMap() {

}

int Map2D::getStatusTower( int node )
{
    return statusTower[node];
}

void Map2D::setStatusTower( int node, int value )
{
    this->statusTower[node] = value;
}

void Map2D::visitedStreet( int towerOne , int towerTwo)
{
    if ( (towerOne == 1 && towerTwo == 2) || (towerTwo == 1 && towerOne == 2)  ) {
        statusStreet[0][1] = 1;
    }

    if ( (towerOne == 2 && towerTwo == 3) || (towerTwo == 2 && towerOne == 3)  ) {
        statusStreet[0][3] = 1;
    }

    if ( (towerOne == 3 && towerTwo == 4) || (towerTwo == 3 && towerOne == 4)  ) {
        statusStreet[0][5] = 1;
    }

    if ( (towerOne == 1 && towerTwo == 18) || (towerTwo == 1 && towerOne == 18)  ) {
        statusStreet[1][0] = 1;
        statusStreet[2][0] = 1;
        statusStreet[3][0] = 1;
    }

    if ( (towerOne == 2 && towerTwo == 19) || (towerTwo == 2 && towerOne == 19)  ) {
        statusStreet[1][2] = 1;
        statusStreet[2][2] = 1;
        statusStreet[3][2] = 1;
    }

    if ( (towerOne == 3 && towerTwo == 20) || (towerTwo == 3 && towerOne == 20)  ) {
        statusStreet[1][4] = 1;
        statusStreet[2][4] = 1;
        statusStreet[3][4] = 1;
    }

    if ( (towerOne == 4 && towerTwo == 21) || (towerTwo == 4 && towerOne == 21)  ) {
        statusStreet[1][4] = 1;
        statusStreet[2][4] = 1;
        statusStreet[3][4] = 1;
    }

    if ( (towerOne == 18 && towerTwo == 19) || (towerTwo == 18 && towerOne == 19)  ) {
        statusStreet[4][1] = 1;
    }

    if ( (towerOne == 19 && towerTwo == 20) || (towerTwo == 19 && towerOne == 20)  ) {
        statusStreet[4][3] = 1;
    }

    if ( (towerOne == 20 && towerTwo == 21) || (towerTwo == 20 && towerOne == 21)  ) {
        statusStreet[4][5] = 1;
    }
}

void Map2D::generateNodes() {

/*
    // 380 = /
    // 381 = |
    // 382 = \
    // 383 = -
*/

    mapSize[0][0] =  1;
    mapSize[0][1] = 383;
    mapSize[0][2] = 2;
    mapSize[0][3] = 383;
    mapSize[0][4] = 3;
    mapSize[0][5] = 383;
    mapSize[0][6] = 4;

    mapSize[1][0] = 381;
    mapSize[1][2] = 381;
    mapSize[1][4] = 381;
    mapSize[1][6] = 381;

    mapSize[2][0] = 381;
    mapSize[2][2] = 381;
    mapSize[2][4] = 381;
    mapSize[2][6] = 381;

    mapSize[3][0] = 381;
    mapSize[3][2] = 381;
    mapSize[3][4] = 381;
    mapSize[3][6] = 381;

    mapSize[4][0] = 18;
    mapSize[4][1] = 383;
    mapSize[4][2] = 19;
    mapSize[4][3] = 383;
    mapSize[4][4] = 20;
    mapSize[4][5] = 383;
    mapSize[4][6] = 21;


}