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

    



// primeira linha

mapSize[0][0] = 1;
mapSize[0][1] = 383;
mapSize[0][2] = 2;
mapSize[0][3] = 383;
mapSize[0][4] = 3;
mapSize[0][5] = 383;
mapSize[0][6] = 4;
mapSize[0][7] = 383;
mapSize[0][8] = 5;
mapSize[0][9] = 383;
mapSize[0][10] = 6;
mapSize[0][11] = 383;
mapSize[0][12] = 7;
mapSize[0][13] = 383;
mapSize[0][14] = 8;
mapSize[0][15] = 383;
mapSize[0][16] = 9;
mapSize[0][17] = 383;
mapSize[0][18] = 10;
mapSize[0][19] = 383;
mapSize[0][20] = 11;
mapSize[0][21] = 383;
mapSize[0][22] = 12;
mapSize[0][23] = 383;
mapSize[0][24] = 13;
mapSize[0][25] = 383;
mapSize[0][26] = 14;
mapSize[0][27] = 383;
mapSize[0][28] = 15;
mapSize[0][29] = 383;
mapSize[0][30] = 16;
mapSize[0][31] = 383;
mapSize[0][32] = 17;

// Segunda Linha

mapSize[1][0] = 381;
mapSize[2][0] = 381;
mapSize[3][0] = 381;

mapSize[4][0] = 18;
mapSize[4][1] = 383;

mapSize[4][2] = 19;
mapSize[3][2] = 381;
mapSize[2][2] = 381;
mapSize[1][2] = 381;

mapSize[4][3] = 383;
mapSize[4][4] = 20;
mapSize[3][4] = 381;
mapSize[2][4] = 381;
mapSize[1][4] = 381;

mapSize[4][5] = 383;
mapSize[4][6] = 21;
mapSize[3][6] = 381;
mapSize[2][6] = 381;
mapSize[1][6] = 381;

mapSize[4][7] = 383;
mapSize[4][8] = 22;
mapSize[3][8] = 381;
mapSize[2][8] = 381;
mapSize[1][8] = 381;

mapSize[4][9] = 383;
mapSize[4][10] = 26;
mapSize[3][10] = 381;
mapSize[2][10] = 23;
mapSize[1][10] = 381;











}