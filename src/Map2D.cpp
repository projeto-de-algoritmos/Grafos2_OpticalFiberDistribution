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

    mapSize[0][29] = 381;
    mapSize[1][0] = 381;
    mapSize[2][0] = 381;
    mapSize[3][0] = 381;
    mapSize[4][0] = 18;
    mapSize[4][1] = 383;
    mapSize[1][2] = 381;
    mapSize[2][2] = 381;
    mapSize[3][2] = 381;
    mapSize[4][2] = 19;
    mapSize[12][0] = 381;
    mapSize[12][29] = 381;
}