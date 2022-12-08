#include "../inc/Map2D.h"

#include <algorithm>
#include <string>

Map2D::Map2D()
{
    for (int i{0}; i < AXIS_Y; i++)
        for (int j{0}; j < AXIS_X; j++)
        {
            mapSize[i][j] = 0;
            statusStreet[i][j] = 0;
        }
}

Map2D::~Map2D() = default;

void Map2D::printMap()
{
    for (int i = 0; i < AXIS_Y; i++)
    {
        for (int j = 0; j < AXIS_X; j++)
        {

            if (mapSize[i][j] == 0)
            {
                std::cout << "   ";
            }
            else
            {

                if (mapSize[i][j] == 1 ||
                    mapSize[i][j] == 2 ||
                    mapSize[i][j] == 3 ||
                    mapSize[i][j] == 4 ||
                    mapSize[i][j] == 5 ||
                    mapSize[i][j] == 6 ||
                    mapSize[i][j] == 7 ||
                    mapSize[i][j] == 8 ||
                    mapSize[i][j] == 9)
                {
                    std::cout << "\x1B[31m0" + std::to_string(mapSize[i][j]) + "\033[0m" + " ";
                    ;
                }
                else
                {
                    if (mapSize[i][j] == 380)
                        (statusStreet[i][j] == true ? std::cout << "\x1B[34m/  \033[0m" : std::cout << "/  ");
                    else if (mapSize[i][j] == 381)
                        (statusStreet[i][j] == true ? std::cout << "\x1B[34m|  \033[0m" : std::cout << "|  ");
                    else if (mapSize[i][j] == 382)
                        (statusStreet[i][j] == true ? std::cout << "\x1B[34m\\  \033[0m" : std::cout << "\\  ");
                    else if (mapSize[i][j] == 383)
                        (statusStreet[i][j] == true ? std::cout << "\x1B[34m-- \033[0m" : std::cout << "-- ");
                    else
                        std::cout << "\x1B[31m" + std::to_string(mapSize[i][j]) + "\033[0m" + " ";
                }
            }
        }

        std::cout << '\n';
    }
}

void Map2D::clearMap()
{
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
    std::cout << "Rua : " << towerOne << " Rua : " << towerTwo << '\n';

    if ( (towerOne == 1 && towerTwo == 2) || (towerTwo == 1 && towerOne == 2)  ) {
        statusStreet[0][1] = 1;
    }

    if ( (towerOne == 2 && towerTwo == 3) || (towerTwo == 2 && towerOne == 3)  ) {
        statusStreet[0][3] = 1;
    }

    if ( (towerOne == 3 && towerTwo == 4) || (towerTwo == 3 && towerOne == 4)  ) {
        statusStreet[0][5] = 1;
    }

    if ( (towerOne == 4 && towerTwo == 5) || (towerTwo == 4 && towerOne == 5)  ) {
        statusStreet[0][7] = 1;
    }

    if ( (towerOne == 5 && towerTwo == 6) || (towerTwo == 5 && towerOne == 6)  ) {
        statusStreet[0][9] = 1;
    }

    if ( (towerOne == 6 && towerTwo == 7) || (towerTwo == 6 && towerOne == 7)  ) {
        statusStreet[0][11] = 1;
    }

    if ( (towerOne == 7 && towerTwo == 8) || (towerTwo == 7 && towerOne == 8)  ) {
        statusStreet[0][13] = 1;
    }

    if ( (towerOne == 8 && towerTwo == 9) || (towerTwo == 8 && towerOne == 9)  ) {
        statusStreet[0][15] = 1;
    }

    if ( (towerOne == 9 && towerTwo == 10) || (towerTwo == 9 && towerOne == 10)  ) {
        statusStreet[0][17] = 1;
    }

    if ( (towerOne == 10 && towerTwo == 11) || (towerTwo == 10 && towerOne == 11)  ) {
        statusStreet[0][19] = 1;
    }

    if ( (towerOne == 11 && towerTwo == 12) || (towerTwo == 11 && towerOne == 12)  ) {
        statusStreet[0][21] = 1;
    }

    if ( (towerOne == 12 && towerTwo == 13) || (towerTwo == 12 && towerOne == 13)  ) {
        statusStreet[0][23] = 1;
    }

    if ( (towerOne == 13 && towerTwo == 14) || (towerTwo == 13 && towerOne == 14)  ) {
        statusStreet[0][25] = 1;
    }

    if ( (towerOne == 14 && towerTwo == 15) || (towerTwo == 14 && towerOne == 15)  ) {
        statusStreet[0][27] = 1;
    }

    if ( (towerOne == 15 && towerTwo == 16) || (towerTwo == 15 && towerOne == 16)  ) {
        statusStreet[0][29] = 1;
    }

    if ( (towerOne == 16 && towerTwo == 17) || (towerTwo == 16 && towerOne == 17)  ) {
        statusStreet[0][31] = 1;
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

    if ( (towerOne == 18 && towerTwo == 19) || (towerTwo == 18 && towerOne == 19)  ) {
        statusStreet[4][1] = 1;
    }

    if ( (towerOne == 19 && towerTwo == 20) || (towerTwo == 19 && towerOne == 20)  ) {
        statusStreet[4][3] = 1;

    }

    if ( (towerOne == 3 && towerTwo == 20) || (towerTwo == 3 && towerOne == 20)  ) {
        statusStreet[3][4] = 1;
        statusStreet[2][4] = 1;
        statusStreet[1][4] = 1;
    }

    if ( (towerOne == 20 && towerTwo == 21) || (towerTwo == 20 && towerOne == 21)  ) {
        statusStreet[4][5] = 1;
    }

    if ( (towerOne == 4 && towerTwo == 21) || (towerTwo == 4 && towerOne == 21  )  )
    {
        statusStreet[3][6] = 1;
        statusStreet[2][6] = 1;
        statusStreet[1][6] = 1;
    }

    if ( (towerOne == 21 && towerTwo == 22) || (towerTwo == 21 && towerOne == 22)  ) {
        statusStreet[4][7] = 1;
    }

    if ( (towerOne == 5 && towerTwo == 22) || (towerTwo == 5 && towerOne == 22)  ) {
        statusStreet[3][8] = 1;
        statusStreet[2][8] = 1;
        statusStreet[1][8] = 1;
    }

    if ( (towerOne == 22 && towerTwo == 26) || (towerTwo == 22 && towerOne == 26)  ) {
        statusStreet[4][9] = 1;
    }

    if ( (towerOne == 6 && towerTwo == 23) || (towerTwo == 6 && towerOne == 23)  ) {
        statusStreet[1][10] = 1;
    }

    if ( (towerOne == 23 && towerTwo == 26) || (towerTwo == 23 && towerOne == 26)  ) {
        statusStreet[3][10] = 1;
    }

    if ( (towerOne == 23 && towerTwo == 24) || (towerTwo == 23 && towerOne == 24)  ) {
        statusStreet[2][11] = 1;
    }

    if ( (towerOne == 7 && towerTwo == 24) || (towerTwo == 7 && towerOne == 24)  ) {
        statusStreet[1][12] = 1;
    }

    if ( (towerOne == 24 && towerTwo == 25) || (towerTwo == 24 && towerOne == 25)  ) {
        statusStreet[2][13] = 1;
    }

    if ( (towerOne == 8 && towerTwo == 25) || (towerTwo == 8 && towerOne == 25)  ) {
        statusStreet[1][14] = 1;
    }

    if ( (towerOne == 25 && towerTwo == 27) || (towerTwo == 25 && towerOne == 27)  ) {
        statusStreet[3][14] = 1;
    }

    if ( (towerOne == 26 && towerTwo == 27) || (towerTwo == 26 && towerOne == 27)  ) {
        statusStreet[4][13] = 1;
        statusStreet[4][11] = 1;
        statusStreet[4][12] = 1;
    }

    if ( (towerOne == 27 && towerTwo == 31) || (towerTwo == 27 && towerOne == 31)  ) {
        statusStreet[4][15] = 1;
    }

    if ( (towerOne == 9 && towerTwo == 31) || (towerTwo == 9 && towerOne == 31)  ) {
        statusStreet[3][16] = 1;
        statusStreet[2][16] = 1;
        statusStreet[1][16] = 1;
    }

    if ( (towerOne == 31 && towerTwo == 32) || (towerTwo == 31 && towerOne == 32)  ) {
        statusStreet[4][17] = 1;
    }

    if ( (towerOne == 10 && towerTwo == 32) || (towerTwo == 10 && towerOne == 32)  ) {
        statusStreet[3][18] = 1;
        statusStreet[2][18] = 1;
        statusStreet[1][18] = 1;
    }

    if ( (towerOne == 32 && towerTwo == 33) || (towerTwo == 32 && towerOne == 33)  ) {
        statusStreet[4][19] = 1;
    }

    if ( (towerOne == 11 && towerTwo == 33) || (towerTwo == 11 && towerOne == 33)  ) {
        statusStreet[3][20] = 1;
        statusStreet[2][20] = 1;
        statusStreet[1][20] = 1;
    }

    if ( (towerOne == 18 && towerTwo == 42) || (towerTwo == 18 && towerOne == 42)  ) {
        statusStreet[5][0] = 1;
        statusStreet[6][0] = 1;
    }

    if ( (towerOne == 42 && towerTwo == 43) || (towerTwo == 42 && towerOne == 43)  ) {
        statusStreet[8][1] = 1;
    }

    if ( (towerOne == 19 && towerTwo == 43) || (towerTwo == 19 && towerOne == 43)  ) {
        statusStreet[7][2] = 1;
        statusStreet[6][2] = 1;
        statusStreet[5][2] = 1;
    }

    if ( (towerOne == 43 && towerTwo == 44) || (towerTwo == 43 && towerOne == 44)  ) {
        statusStreet[8][3] = 1;
    }

    if ( (towerOne == 20 && towerTwo == 44) || (towerTwo == 20 && towerOne == 44)  ) {
        statusStreet[7][4] = 1;
        statusStreet[6][4] = 1;
        statusStreet[5][4] = 1;
    }

    if ( (towerOne == 44 && towerTwo == 45) || (towerTwo == 44 && towerOne == 45)  ) {
        statusStreet[8][5] = 1;
    }

    if ( (towerOne == 21 && towerTwo == 45) || (towerTwo == 21 && towerOne == 45)  ) {
        statusStreet[7][6] = 1;
        statusStreet[6][6] = 1;
        statusStreet[5][6] = 1;
    }

    if ( (towerOne == 45 && towerTwo == 46) || (towerTwo == 45 && towerOne == 46)  ) {
        statusStreet[8][7] = 1;
    }

    if ( (towerOne == 22 && towerTwo == 46) || (towerTwo == 22 && towerOne == 46)  ) {
        statusStreet[7][8] = 1;
        statusStreet[6][8] = 1;
        statusStreet[5][8] = 1;
    }

    if ( (towerOne == 46 && towerTwo == 47) || (towerTwo == 46 && towerOne == 47)  ) {
        statusStreet[8][9] = 1;
    }

    if ( (towerOne == 26 && towerTwo == 28) || (towerTwo == 26 && towerOne == 28)  ) {
        statusStreet[5][10] = 1;
    }

    if ( (towerOne == 28 && towerTwo == 47) || (towerTwo == 28 && towerOne == 47)  ) {
        statusStreet[7][10] = 1;
    }

    if ( (towerOne == 28 && towerTwo == 29) || (towerTwo == 28 && towerOne == 29)  ) {
        statusStreet[6][11] = 1;
    }

    if ( (towerOne == 29 && towerTwo == 48) || (towerTwo == 29 && towerOne == 48)  ) {
        statusStreet[7][12] = 1;
    }

    if ( (towerOne == 29 && towerTwo == 30) || (towerTwo == 29 && towerOne == 30)  ) {
        statusStreet[6][13] = 1;
    }

    if ( (towerOne == 27 && towerTwo == 30) || (towerTwo == 27 && towerOne == 30)  ) {
        statusStreet[5][14] = 1;
    }

    if ( (towerOne == 30 && towerTwo == 49) || (towerTwo == 30 && towerOne == 49)  ) {
        statusStreet[7][14] = 1;
    }

    if ( (towerOne == 47 && towerTwo == 48) || (towerTwo == 47 && towerOne == 48)  ) {
        statusStreet[8][11] = 1;
    }

    if ( (towerOne == 48 && towerTwo == 49) || (towerTwo == 48 && towerOne == 49)  ) {
        statusStreet[8][13] = 1;
    }

    if ( (towerOne == 49 && towerTwo == 50) || (towerTwo == 49 && towerOne == 50)  ) {
        statusStreet[8][15] = 1;
    }

    if ( (towerOne == 31 && towerTwo == 50) || (towerTwo == 31 && towerOne == 50)  ) {
        statusStreet[6][16] = 1;
        statusStreet[5][16] = 1;
        statusStreet[7][16] = 1;
    }

    if ( (towerOne == 50 && towerTwo == 51) || (towerTwo == 50 && towerOne == 51)  ) {
        statusStreet[8][17] = 1;
    }

    if ( (towerOne == 32 && towerTwo == 51) || (towerTwo == 32 && towerOne == 51)  ) {
        statusStreet[6][18] = 1;
        statusStreet[5][18] = 1;
        statusStreet[7][18] = 1;
    }

    if ( (towerOne == 51 && towerTwo == 52) || (towerTwo == 51 && towerOne == 52)  ) {
        statusStreet[8][19] = 1;
    }

    if ( (towerOne == 33 && towerTwo == 52) || (towerTwo == 33 && towerOne == 52)  ) {
        statusStreet[7][20] = 1;
        statusStreet[6][20] = 1;
        statusStreet[5][20] = 1;
    }

    if ( (towerOne == 52 && towerTwo == 53) || (towerTwo == 52 && towerOne == 53)  ) {
        statusStreet[8][21] = 1;
    }

    if ( (towerOne == 12 && towerTwo == 53) || (towerTwo == 12 && towerOne == 53)  ) {
        statusStreet[1][22] = 1;
        statusStreet[2][22] = 1;
        statusStreet[3][22] = 1;
        statusStreet[4][22] = 1;
        statusStreet[5][22] = 1;
        statusStreet[6][22] = 1;
        statusStreet[7][22] = 1;
    }

    if ( (towerOne == 53 && towerTwo == 54) || (towerTwo == 53 && towerOne == 54)  ) {
        statusStreet[8][23] = 1;
    }

    if ( (towerOne == 13 && towerTwo == 54) || (towerTwo == 13 && towerOne == 54)  ) {
        statusStreet[1][24] = 1;
        statusStreet[2][24] = 1;
        statusStreet[3][24] = 1;
        statusStreet[4][24] = 1;
        statusStreet[5][24] = 1;
        statusStreet[6][24] = 1;
        statusStreet[7][24] = 1;
    }

    if ( (towerOne == 54 && towerTwo == 55) || (towerTwo == 54 && towerOne == 55)  ) {
        statusStreet[8][25] = 1;
    }

    if ( (towerOne == 14 && towerTwo == 55) || (towerTwo == 14 && towerOne == 55)  ) {
        statusStreet[1][26] = 1;
        statusStreet[2][26] = 1;
        statusStreet[3][26] = 1;
        statusStreet[4][26] = 1;
        statusStreet[5][26] = 1;
        statusStreet[6][26] = 1;
        statusStreet[7][26] = 1;
    }

    if ( (towerOne == 55 && towerTwo == 56) || (towerTwo == 55 && towerOne == 56)  ) {
        statusStreet[8][27] = 1;
    }

    if ( (towerOne == 15 && towerTwo == 56) || (towerTwo == 15 && towerOne == 56)  ) {
        statusStreet[1][28] = 1;
        statusStreet[2][28] = 1;
        statusStreet[3][28] = 1;
        statusStreet[4][28] = 1;
        statusStreet[5][28] = 1;
        statusStreet[6][28] = 1;
        statusStreet[7][28] = 1;
    }

    if ( (towerOne == 56 && towerTwo == 57) || (towerTwo == 56 && towerOne == 57)  ) {
        statusStreet[8][29] = 1;
    }

    if ( (towerOne == 16 && towerTwo == 57) || (towerTwo == 16 && towerOne == 57)  ) {
        statusStreet[1][30] = 1;
        statusStreet[2][30] = 1;
        statusStreet[3][30] = 1;
        statusStreet[4][30] = 1;
        statusStreet[5][30] = 1;
        statusStreet[6][30] = 1;
        statusStreet[7][30] = 1;

    }

    if ( (towerOne == 57 && towerTwo == 58) || (towerTwo == 57 && towerOne == 58)  ) {
        statusStreet[8][31] = 1;
    }

    if ( (towerOne == 17 && towerTwo == 34) || (towerTwo == 17 && towerOne == 34)  ) {
        statusStreet[1][32] = 1;
    }

    if ( (towerOne == 34 && towerTwo == 58) || (towerTwo == 34 && towerOne == 58)  ) {
        statusStreet[3][32] = 1;
        statusStreet[4][32] = 1;
        statusStreet[5][32] = 1;
        statusStreet[6][32] = 1;
        statusStreet[7][32] = 1;
    }

    if ( (towerOne == 58 && towerTwo == 59) || (towerTwo == 58 && towerOne == 59)  ) {
        statusStreet[8][33] = 1;
    }

    if ( (towerOne == 34 && towerTwo == 59) || (towerTwo == 34 && towerOne == 59)  ) {
        statusStreet[3][33] = 1;
        statusStreet[4][34] = 1;
        statusStreet[5][34] = 1;
        statusStreet[6][34] = 1;
        statusStreet[7][34] = 1;
    }

    if ( (towerOne == 59 && towerTwo == 60) || (towerTwo == 59 && towerOne == 60)  ) {
        statusStreet[8][35] = 1;
    }

    if ( (towerOne == 35 && towerTwo == 60) || (towerTwo == 35 && towerOne == 60)  ) {
        statusStreet[4][36] = 1;
        statusStreet[5][36] = 1;
        statusStreet[6][36] = 1;
        statusStreet[7][36] = 1;
    }

    if ( (towerOne == 60 && towerTwo == 61) || (towerTwo == 60 && towerOne == 61)  ) {
        statusStreet[8][37] = 1;
    }

    if ( (towerOne == 61 && towerTwo == 62) || (towerTwo == 61 && towerOne == 62)  ) {
        statusStreet[8][39] = 1;
    }

    if ( (towerOne == 62 && towerTwo == 63) || (towerTwo == 62 && towerOne == 63)  ) {
        statusStreet[8][41] = 1;
    }

    if ( (towerOne == 36 && towerTwo == 63) || (towerTwo == 36 && towerOne == 63)  ) {
        statusStreet[4][42] = 1;
        statusStreet[5][42] = 1;
        statusStreet[6][42] = 1;
        statusStreet[7][42] = 1;
    }

    if ( (towerOne == 63 && towerTwo == 64) || (towerTwo == 63 && towerOne == 64)  ) {
        statusStreet[8][43] = 1;
    }

    if ( (towerOne == 37 && towerTwo == 64) || (towerTwo == 37 && towerOne == 64)  ) {
        statusStreet[3][44] = 1;
        statusStreet[4][44] = 1;
        statusStreet[5][44] = 1;
        statusStreet[6][44] = 1;
        statusStreet[7][44] = 1;
    }

    if ( (towerOne == 64 && towerTwo == 65) || (towerTwo == 64 && towerOne == 65)  ) {
        statusStreet[8][45] = 1;
    }

    if ( (towerOne == 38 && towerTwo == 65) || (towerTwo == 38 && towerOne == 65)  ) {
        statusStreet[3][46] = 1;
        statusStreet[4][46] = 1;
        statusStreet[5][46] = 1;
        statusStreet[6][46] = 1;
        statusStreet[7][46] = 1;
    }

    if ( (towerOne == 65 && towerTwo == 66) || (towerTwo == 65 && towerOne == 66)  ) {
        statusStreet[8][47] = 1;
    }

    if ( (towerOne == 39 && towerTwo == 66) || (towerTwo == 39 && towerOne == 66)  ) {
        statusStreet[4][48] = 1;
        statusStreet[3][48] = 1;
        statusStreet[5][48] = 1;
        statusStreet[6][48] = 1;
        statusStreet[7][48] = 1;
    }

    if ( (towerOne == 66 && towerTwo == 67) || (towerTwo == 66 && towerOne == 67)  ) {
        statusStreet[8][49] = 1;
    }

    if ( (towerOne == 40 && towerTwo == 67) || (towerTwo == 40 && towerOne == 67)  ) {
        statusStreet[4][50] = 1;
        statusStreet[3][50] = 1;
        statusStreet[5][50] = 1;
        statusStreet[6][50] = 1;
        statusStreet[7][50] = 1;
    }

    if ( (towerOne == 67 && towerTwo == 68) || (towerTwo == 67 && towerOne == 68)  ) {
        statusStreet[8][51] = 1;
    }

    if ( (towerOne == 41 && towerTwo == 68) || (towerTwo == 41 && towerOne == 68)  ) {
        statusStreet[4][52] = 1;
        statusStreet[5][52] = 1;
        statusStreet[6][52] = 1;
        statusStreet[7][52] = 1;
    }

    if ( (towerOne == 68 && towerTwo == 69) || (towerTwo == 68 && towerOne == 69)  ) {
        statusStreet[8][53] = 1;
    }

    if ( (towerOne == 43 && towerTwo == 70) || (towerTwo == 43 && towerOne == 70)  ) {
        statusStreet[9][3] = 1;
        statusStreet[9][4] = 1;
        statusStreet[10][5] = 1;
    }

    if ( (towerOne == 45 && towerTwo == 70) || (towerTwo == 45 && towerOne == 70)  ) {
        statusStreet[10][6] = 1;
        statusStreet[9][6] = 1;
    }

    if ( (towerOne == 70 && towerTwo == 71) || (towerTwo == 70 && towerOne == 71)  ) {
        statusStreet[11][7] = 1;
    }

    if ( (towerOne == 46 && towerTwo == 71) || (towerTwo == 46 && towerOne == 71)  ) {
        statusStreet[9][8] = 1;
        statusStreet[10][8] = 1;
        statusStreet[11][8] = 1;
    }

    if ( (towerOne == 71 && towerTwo == 72) || (towerTwo == 71 && towerOne == 72)  ) {
        statusStreet[12][9] = 1; 
        statusStreet[13][10] = 1;
        statusStreet[14][11] = 1;
    }

    if ( (towerOne == 48 && towerTwo == 74) || (towerTwo == 48 && towerOne == 74)  ) {
        statusStreet[9][12] = 1;
    }

    if ( (towerOne == 74 && towerTwo == 76) || (towerTwo == 74 && towerOne == 76)  ) {
        statusStreet[11][12] = 1;
    }

    if ( (towerOne == 74 && towerTwo == 75) || (towerTwo == 74 && towerOne == 75)  ) {
        statusStreet[10][13] = 1;
        statusStreet[10][14] = 1;
        statusStreet[10][15] = 1;
        statusStreet[10][16] = 1;
        statusStreet[10][17] = 1;
        statusStreet[10][18] = 1;
        statusStreet[10][19] = 1;
    }

    if ( (towerOne == 76 && towerTwo == 72) || (towerTwo == 76 && towerOne == 72)  ) {
        statusStreet[13][12] = 1;
    }

    if ( (towerOne == 76 && towerTwo == 77) || (towerTwo == 76 && towerOne == 77)  ) {
        statusStreet[12][13] = 1;
        statusStreet[12][14] = 1;
        statusStreet[12][15] = 1;
        statusStreet[12][16] = 1;
        statusStreet[12][17] = 1;
        statusStreet[12][18] = 1;
        statusStreet[12][19] = 1;
    }

    if ( (towerOne == 72 && towerTwo == 78) || (towerTwo == 72 && towerOne == 78)  ) {
        statusStreet[14][13] = 1;
        statusStreet[14][14] = 1;
        statusStreet[14][15] = 1;
        statusStreet[14][16] = 1;
        statusStreet[14][17] = 1;
        statusStreet[14][18] = 1;
        statusStreet[14][19] = 1;
    }

    if ( (towerOne == 72 && towerTwo == 73) || (towerTwo == 72 && towerOne == 73)  ) {
        statusStreet[15][13] = 1;
    }

    if ( (towerOne == 73 && towerTwo == 79) || (towerTwo == 73 && towerOne == 79)  ) {
        statusStreet[16][15] = 1;
        statusStreet[16][19] = 1;
        statusStreet[16][18] = 1;
        statusStreet[16][17] = 1;
        statusStreet[16][16] = 1;
    }

    if ( (towerOne == 52 && towerTwo == 75) || (towerTwo == 52 && towerOne == 75)  ) {
        statusStreet[9][20] = 1;
    }

    if ( (towerOne == 75 && towerTwo == 77) || (towerTwo == 75 && towerOne == 77)  ) {
        statusStreet[11][20] = 1;
    }

    if ( (towerOne == 77 && towerTwo == 78) || (towerTwo == 77 && towerOne == 78)  ) {
        statusStreet[13][20] = 1;
    }

    if ( (towerOne == 78 && towerTwo == 79) || (towerTwo == 78 && towerOne == 79)  ) {
        statusStreet[15][20] = 1;
    }

    if ( (towerOne == 79 && towerTwo == 80) || (towerTwo == 79 && towerOne == 80)  ) {
        statusStreet[16][21] = 1;
    }

    if ( (towerOne == 53 && towerTwo == 80) || (towerTwo == 53 && towerOne == 80)  ) {
        statusStreet[9][22] = 1;
        statusStreet[10][22] = 1;
        statusStreet[11][22] = 1;
        statusStreet[12][22] = 1;
        statusStreet[13][22] = 1;
        statusStreet[14][22] = 1;
        statusStreet[15][22] = 1;
    }

    if ( (towerOne == 80 && towerTwo == 81) || (towerTwo == 80 && towerOne == 81)  ) {
        statusStreet[16][23] = 1;
    }

    if ( (towerOne == 54 && towerTwo == 81) || (towerTwo == 54 && towerOne == 81)  ) {
        statusStreet[9][24] = 1;
        statusStreet[10][24] = 1;
        statusStreet[11][24] = 1;
        statusStreet[12][24] = 1;
        statusStreet[13][24] = 1;
        statusStreet[14][24] = 1;
        statusStreet[15][24] = 1;
    }

    if ( (towerOne == 81 && towerTwo == 82) || (towerTwo == 81 && towerOne == 82)  ) {
        statusStreet[16][25] = 1;
    }

    if ( (towerOne == 55 && towerTwo == 82) || (towerTwo == 55 && towerOne == 82)  ) {
        statusStreet[9][26] = 1;
        statusStreet[10][26] = 1;
        statusStreet[11][26] = 1;
        statusStreet[12][26] = 1;
        statusStreet[13][26] = 1;
        statusStreet[14][26] = 1;
        statusStreet[15][26] = 1;
    }

    if ( (towerOne == 82 && towerTwo == 83) || (towerTwo == 82 && towerOne == 83)  ) {
        statusStreet[16][31] = 1;
        statusStreet[16][30] = 1;
        statusStreet[16][28] = 1;
        statusStreet[16][27] = 1;
        statusStreet[16][29] = 1;
    }

    if ( (towerOne == 56 && towerTwo == 84) || (towerTwo == 56 && towerOne == 84)  ) {
        statusStreet[9][28] = 1;
        statusStreet[10][28] = 1;
    }

    if ( (towerOne == 57 && towerTwo == 85) || (towerTwo == 57 && towerOne == 85)  ) {
        statusStreet[9][30] = 1;
        statusStreet[10][30] = 1;
    }

    if ( (towerOne == 58 && towerTwo == 83) || (towerTwo == 58 && towerOne == 83)  ) {
        statusStreet[9][32] = 1;
        statusStreet[10][32] = 1;
        statusStreet[11][32] = 1;
        statusStreet[12][32] = 1;
        statusStreet[13][32] = 1;
        statusStreet[14][32] = 1;
        statusStreet[15][32] = 1;
    }

    if ( (towerOne == 83 && towerTwo == 97) || (towerTwo == 83 && towerOne == 97)  ) {
        statusStreet[16][33] = 1;
    }

    if ( (towerOne == 59 && towerTwo == 86) || (towerTwo == 59 && towerOne == 86)  ) {
        statusStreet[11][34] = 1;
        statusStreet[10][34] = 1;
        statusStreet[9][34] = 1;
    }

    if ( (towerOne == 86 && towerTwo == 95) || (towerTwo == 86 && towerOne == 95)  ) {
        statusStreet[13][34] = 1;
    }

    if ( (towerOne == 95 && towerTwo == 97) || (towerTwo == 95 && towerOne == 97)  ) {
        statusStreet[15][34] = 1;
    }

    if ( (towerOne == 86 && towerTwo == 87) || (towerTwo == 86 && towerOne == 87)  ) {
        statusStreet[12][35] = 1;
    }

    if ( (towerOne == 60 && towerTwo == 87) || (towerTwo == 60 && towerOne == 87)  ) {
        statusStreet[11][36] = 1;
        statusStreet[10][36] = 1;
        statusStreet[9][36] = 1;
    }

    if ( (towerOne == 87 && towerTwo == 88) || (towerTwo == 87 && towerOne == 88)  ) {
        statusStreet[12][37] = 1;
    }

    if ( (towerOne == 61 && towerTwo == 88) || (towerTwo == 61 && towerOne == 88)  ) {
        statusStreet[11][38] = 1;
        statusStreet[10][38] = 1;
        statusStreet[9][38] = 1;
    }

    if ( (towerOne == 88 && towerTwo == 89) || (towerTwo == 88 && towerOne == 89)  ) {
        statusStreet[12][39] = 1;
    }

    if ( (towerOne == 62 && towerTwo == 89) || (towerTwo == 62 && towerOne == 89)  ) {
        statusStreet[9][40] = 1;
        statusStreet[10][40] = 1;
        statusStreet[11][40] = 1;
    }

    if ( (towerOne == 95 && towerTwo == 96) || (towerTwo == 95 && towerOne == 96)  ) {
        statusStreet[14][35] = 1;
    }

    if ( (towerOne == 97 && towerTwo == 98) || (towerTwo == 97 && towerOne == 98)  ) {
        statusStreet[16][35] = 1;

    }

    if ( (towerOne == 96 && towerTwo == 98) || (towerTwo == 96 && towerOne == 98)  ) {
        statusStreet[15][36] = 1;
    }

    if ( (towerOne == 98 && towerTwo == 99) || (towerTwo == 98 && towerOne == 99)  ) {
        statusStreet[16][37] = 1;
        statusStreet[16][38] = 1;
        statusStreet[16][39] = 1;
    }

    if ( (towerOne == 89 && towerTwo == 99) || (towerTwo == 89 && towerOne == 99)  ) {
        statusStreet[13][40] = 1;
        statusStreet[14][40] = 1;
        statusStreet[15][40] = 1;
    }

    if ( (towerOne == 99 && towerTwo == 100) || (towerTwo == 99 && towerOne == 100)  ) {
        statusStreet[16][41] = 1;
    }

    if ( (towerOne == 63 && towerTwo == 90) || (towerTwo == 63 && towerOne == 90)  ) {
        statusStreet[9][42] = 1;
        statusStreet[10][42] = 1;
        statusStreet[11][42] = 1;
    }

    if ( (towerOne == 90 && towerTwo == 100) || (towerTwo == 90 && towerOne == 100)  ) {
        statusStreet[13][42] = 1;
        statusStreet[14][42] = 1;
        statusStreet[15][42] = 1;
    }

    if ( (towerOne == 100 && towerTwo == 101) || (towerTwo == 100 && towerOne == 101)  ) {
        statusStreet[16][43] = 1;
    }

    if ( (towerOne == 64 && towerTwo == 91) || (towerTwo == 64 && towerOne == 91)  ) {
        statusStreet[9][44] = 1;
        statusStreet[10][44] = 1;
        statusStreet[11][44] = 1;
    }

    if ( (towerOne == 91 && towerTwo == 101) || (towerTwo == 91 && towerOne == 101)  ) {
        statusStreet[13][44] = 1;
        statusStreet[14][44] = 1;
        statusStreet[15][44] = 1;
    }

    if ( (towerOne == 101 && towerTwo == 102) || (towerTwo == 101 && towerOne == 102)  ) {
        statusStreet[16][45] = 1;
    }

    if ( (towerOne == 65 && towerTwo == 92) || (towerTwo == 65 && towerOne == 92)  ) {
        statusStreet[9][46] = 1;
        statusStreet[10][46] = 1;
        statusStreet[11][46] = 1;
    }

    if ( (towerOne == 92 && towerTwo == 102) || (towerTwo == 92 && towerOne == 102)  ) {
        statusStreet[13][46] = 1;
        statusStreet[14][46] = 1;
        statusStreet[15][46] = 1;
    }

    if ( (towerOne == 102 && towerTwo == 103) || (towerTwo == 102 && towerOne == 103)  ) {
        statusStreet[16][47] = 1;
    }


    if ( (towerOne == 66 && towerTwo == 93) || (towerTwo == 66 && towerOne == 93)  ) {
        statusStreet[9][48] = 1;
        statusStreet[10][48] = 1;
        statusStreet[11][48] = 1;
    }

    if ( (towerOne == 93 && towerTwo == 103) || (towerTwo == 93 && towerOne == 103)  ) {
        statusStreet[13][48] = 1;
        statusStreet[14][48] = 1;
        statusStreet[15][48] = 1;
    }

    if ( (towerOne == 67 && towerTwo == 94) || (towerTwo == 67 && towerOne == 94)  ) {
        statusStreet[9][50] = 1;
        statusStreet[10][50] = 1;
        statusStreet[11][50] = 1;
    }

    if ( (towerOne == 94 && towerTwo == 104) || (towerTwo == 94 && towerOne == 104)  ) {
        statusStreet[13][50] = 1;
        statusStreet[14][50] = 1;
        statusStreet[15][50] = 1;
    }

    if ( (towerOne == 103 && towerTwo == 104) || (towerTwo == 103 && towerOne == 104)  ) {
        statusStreet[16][49] = 1;
    }

    if ( (towerOne == 104 && towerTwo == 105) || (towerTwo == 104 && towerOne == 105)  ) {
        statusStreet[16][51] = 1;
    }

    if ( (towerOne == 89 && towerTwo == 90) || (towerTwo == 89 && towerOne == 90)  ) {
        statusStreet[12][41] = 1;
    }

    if ( (towerOne == 90 && towerTwo == 91) || (towerTwo == 90 && towerOne == 91)  ) {
        statusStreet[12][43] = 1;
    }

    if ( (towerOne == 91 && towerTwo == 92) || (towerTwo == 91 && towerOne == 92)  ) {
        statusStreet[12][45] = 1;
    }

    if ( (towerOne == 92 && towerTwo == 93) || (towerTwo == 92 && towerOne == 93)  ) {
        statusStreet[12][47] = 1;
    }

    if ( (towerOne == 93 && towerTwo == 94) || (towerTwo == 93 && towerOne == 94)  ) {
        statusStreet[12][49] = 1;
    }



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
    mapSize[1][2] = 381;
    mapSize[1][4] = 381;
    mapSize[1][6] = 381;

    mapSize[2][0] = 381;
    mapSize[2][2] = 381;
    mapSize[2][4] = 381;
    mapSize[2][6] = 381;

    mapSize[3][0] = 381;

    mapSize[4][0] = 18;
    mapSize[5][0] = 381;
    mapSize[6][0] = 381;
    mapSize[7][0] = 42;
    mapSize[8][1] = 382;

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

    mapSize[2][11] = 383;
    mapSize[2][12] = 24;
    mapSize[2][13] = 383;
    mapSize[1][12] = 381;

    mapSize[2][14] = 25;
    mapSize[3][14] = 381;
    mapSize[1][14] = 381;

    mapSize[4][14] = 27;
    mapSize[4][13] = 383;
    mapSize[4][11] = 383;
    mapSize[4][12] = 383;

    mapSize[4][15] = 383;
    mapSize[4][16] = 31;
    mapSize[3][16] = 381;
    mapSize[2][16] = 381;
    mapSize[1][16] = 381;

    mapSize[4][17] = 383;
    mapSize[4][18] = 32;
    mapSize[3][18] = 381;
    mapSize[2][18] = 381;
    mapSize[1][18] = 381;

    mapSize[4][19] = 383;
    mapSize[4][20] = 33;
    mapSize[3][20] = 381;
    mapSize[2][20] = 381;
    mapSize[1][20] = 381;

    mapSize[1][22] = 381;
    mapSize[2][22] = 381;
    mapSize[3][22] = 381;
    mapSize[4][22] = 381;
    mapSize[5][22] = 381;
    mapSize[6][22] = 381;
    
    mapSize[8][22] = 53;
    mapSize[9][22] = 382;
    mapSize[10][22] = 382;
    mapSize[11][22] = 382;
    mapSize[12][22] = 382;
    mapSize[13][22] = 382;
    mapSize[14][22] = 382;
    mapSize[15][22] = 382;
    mapSize[16][22] = 382;


    mapSize[8][23] = 383;
    mapSize[8][24] = 54;
    mapSize[1][24] = 381;
    mapSize[2][24] = 381;
    mapSize[3][24] = 381;
    mapSize[4][24] = 381;
    mapSize[5][24] = 381;
    mapSize[6][24] = 381;

    mapSize[9][24] = 382;
    mapSize[10][24] = 382;
    mapSize[11][24] = 382;
    mapSize[12][24] = 382;
    mapSize[13][24] = 382;
    mapSize[14][24] = 382;
    mapSize[15][24] = 382;
    mapSize[16][24] = 382;

    mapSize[8][25] = 383;

    mapSize[2][26] = 381;
    mapSize[1][26] = 381;

    mapSize[8][26] = 55;
    mapSize[9][26] = 382;
    mapSize[10][26] = 382;
    mapSize[11][26] = 382;
    mapSize[12][26] = 382;
    mapSize[13][26] = 382;
    mapSize[14][26] = 382;
    mapSize[15][26] = 382;
    mapSize[16][26] = 382;
    mapSize[3][26] = 381;
    mapSize[4][26] = 381;
    mapSize[5][26] = 381;
    mapSize[6][26] = 381;

    mapSize[8][27] = 383;
    mapSize[8][28] = 56;
    mapSize[1][28] = 381;
    mapSize[2][28] = 381;
    mapSize[3][28] = 381;
    mapSize[4][28] = 381;
    mapSize[5][28] = 381;
    mapSize[6][28] = 381;
    mapSize[9][28] = 381;
    mapSize[10][28] = 381;
    mapSize[11][28] = 84;

    mapSize[8][29] = 383;
    mapSize[8][30] = 57;
    mapSize[1][30] = 381;
    mapSize[2][30] = 381;
    mapSize[3][30] = 381;
    mapSize[4][30] = 381;
    mapSize[5][30] = 381;
    mapSize[6][30] = 381;
    mapSize[9][30] = 381;
    mapSize[10][30] = 381;
    mapSize[11][30] = 85;

    mapSize[8][31] = 383;
    mapSize[8][32] = 58;
    mapSize[1][32] = 381;

    mapSize[9][32] = 381;
    mapSize[10][32] = 381;
    mapSize[11][32] = 381;
    mapSize[12][32] = 381;
    mapSize[13][32] = 381;
    mapSize[14][32] = 381;
    mapSize[15][32] = 381;

    

    mapSize[2][32] = 34;
    mapSize[3][33] = 382;
    mapSize[3][32] = 381;
    mapSize[4][32] = 381;
    mapSize[5][32] = 381;
    mapSize[6][32] = 381;

    mapSize[8][33] = 383;
    mapSize[8][34] = 59;
    mapSize[4][34] = 382;
    mapSize[5][34] = 381;
    mapSize[6][34] = 381;

    mapSize[8][35] = 383;
    mapSize[8][36] = 60;
    mapSize[3][36] = 35;
    mapSize[4][36] = 381;
    mapSize[5][36] = 381;
    mapSize[6][36] = 381;

    mapSize[8][37] = 383;
    mapSize[8][38] = 61;

    mapSize[8][39] = 383;
    mapSize[8][40] = 62;

    mapSize[8][41] = 383;
    mapSize[8][42] = 63;
    mapSize[3][42] = 36;
    mapSize[4][42] = 381;
    mapSize[5][42] = 381;
    mapSize[6][42] = 381;

    mapSize[8][43] = 383;

    mapSize[8][44] = 64;

    mapSize[2][44] = 37;
    mapSize[4][44] = 381;
    mapSize[3][44] = 381;
    mapSize[5][44] = 381;
    mapSize[6][44] = 381;

    mapSize[8][45] = 383;

    mapSize[8][46] = 65;

    mapSize[2][46] = 38;
    mapSize[4][46] = 381;
    mapSize[3][46] = 381;
    mapSize[5][46] = 381;
    mapSize[6][46] = 381;

    mapSize[8][47] = 383;

    mapSize[8][48] = 66;

    mapSize[2][48] = 39;
    mapSize[4][48] = 381;
    mapSize[3][48] = 381;
    mapSize[5][48] = 381;
    mapSize[6][48] = 381;

    mapSize[8][49] = 383;

    mapSize[8][50] = 67;

    mapSize[9][50] = 381;
    mapSize[10][50] = 381;
    mapSize[11][50] = 381;
    mapSize[12][50] = 94;
    mapSize[13][50] = 381;
    mapSize[14][50] = 381;
    mapSize[15][50] = 381;
    mapSize[16][50] = 104;

    mapSize[9][48] = 381;
    mapSize[10][48] = 381;
    mapSize[11][48] = 381;
    mapSize[12][48] = 93;
    mapSize[13][48] = 381;
    mapSize[14][48] = 381;
    mapSize[15][48] = 381;
    mapSize[16][48] = 103;
    mapSize[16][49] = 383;

    mapSize[9][46] = 381;
    mapSize[10][46] = 381;
    mapSize[11][46] = 381;
    mapSize[12][46] = 92;
    mapSize[13][46] = 381;
    mapSize[14][46] = 381;
    mapSize[15][46] = 381;
    mapSize[16][46] = 102;
    mapSize[16][47] = 383;

    mapSize[9][44] = 381;
    mapSize[10][44] = 381;
    mapSize[11][44] = 381;
    mapSize[12][44] = 91;
    mapSize[13][44] = 381;
    mapSize[14][44] = 381;
    mapSize[15][44] = 381;
    mapSize[16][44] = 101;
    mapSize[16][45] = 383;

    mapSize[9][42] = 381;
    mapSize[10][42] = 381;
    mapSize[11][42] = 381;
    mapSize[12][42] = 90;
    mapSize[13][42] = 381;
    mapSize[14][42] = 381;
    mapSize[15][42] = 381;
    mapSize[16][42] = 100;
    mapSize[16][43] = 383;

    mapSize[9][40] = 381;
    mapSize[10][40] = 381;
    mapSize[11][40] = 381;
    mapSize[12][40] = 89;
    mapSize[13][40] = 381;
    mapSize[14][40] = 381;
    mapSize[15][40] = 381;
    mapSize[16][40] = 99;
    mapSize[16][41] = 383;

    mapSize[12][39] = 383;
    mapSize[12][38] = 88;
    mapSize[12][37] = 383;
    mapSize[12][36] = 87;
    mapSize[12][35] = 383;
    mapSize[12][34] = 86;

    mapSize[13][34] = 381;
    mapSize[14][34] = 95;

    mapSize[14][35] = 383;
    mapSize[14][36] = 96;
    mapSize[15][36] = 381;
    mapSize[16][36] = 98;
    mapSize[16][37] = 383;
    mapSize[16][38] = 383;
    mapSize[16][39] = 383;
    

    mapSize[15][34] = 381;
    mapSize[16][34] = 97;

    mapSize[16][33] = 383;
    mapSize[16][32] = 83;

    mapSize[16][31] = 383;
    mapSize[16][30] = 383;

    mapSize[16][26] = 82;
    mapSize[16][28] = 383;
    mapSize[16][27] = 383;
    mapSize[16][29] = 383;


    mapSize[16][24] = 81;
    mapSize[16][23] = 383;

    mapSize[16][25] = 383;
    mapSize[16][22] = 80;

    mapSize[16][21] = 383;
    mapSize[16][20] = 79;
    mapSize[16][19] = 383;
    mapSize[16][18] = 383;
    mapSize[16][17] = 383;
    mapSize[16][16] = 383;

    mapSize[14][20] = 78;
    mapSize[15][20] = 382;
    mapSize[13][20] = 382;
    mapSize[12][20] = 77;
    mapSize[11][20] = 382;
    mapSize[10][20] = 75;
    mapSize[9][20] = 382;



    mapSize[16][35] = 383;

    mapSize[11][38] = 381;
    mapSize[10][38] = 381;
    mapSize[9][38] = 381;

    mapSize[11][34] = 381;
    mapSize[10][34] = 381;
    mapSize[9][34] = 381;

    mapSize[11][36] = 381;
    mapSize[10][36] = 381;
    mapSize[9][36] = 381;

    


    mapSize[16][51] = 383;
    mapSize[16][52] = 105;

    mapSize[2][50] = 40;
    mapSize[4][50] = 381;
    mapSize[3][50] = 381;
    mapSize[5][50] = 381;
    mapSize[6][50] = 381;

    mapSize[8][51] = 383;

    mapSize[8][52] = 68;

    mapSize[3][52] = 41;
    mapSize[4][52] = 381;
    mapSize[5][52] = 381;
    mapSize[6][52] = 381;

    mapSize[8][53] = 383;

    mapSize[8][54] = 69;

    mapSize[8][21] = 383;
    mapSize[8][20] = 52;

    mapSize[6][20] = 381;
    mapSize[5][20] = 381;

    mapSize[8][19] = 383;
    mapSize[8][18] = 51;
    mapSize[6][18] = 381;
    mapSize[5][18] = 381;

    mapSize[8][17] = 383;
    mapSize[8][16] = 50;
    mapSize[6][16] = 381;
    mapSize[5][16] = 381;

    mapSize[8][15] = 383;
    mapSize[8][14] = 49;
    mapSize[15][14] = 73;
    mapSize[16][15] = 382;
    mapSize[15][13] = 382;

    mapSize[6][14] = 30;
    mapSize[5][14] = 381;

    mapSize[7][14] = 381;
    mapSize[7][16] = 381;
    mapSize[7][18] = 381;
    mapSize[7][20] = 381;
    mapSize[7][22] = 381;
    mapSize[7][24] = 381;
    mapSize[7][26] = 381;
    mapSize[7][28] = 381;
    mapSize[7][30] = 381;
    mapSize[7][32] = 381;
    mapSize[7][34] = 381;
    mapSize[7][36] = 381;
    mapSize[7][42] = 381;
    mapSize[7][44] = 381;
    mapSize[7][46] = 381;
    mapSize[7][48] = 381;
    mapSize[7][50] = 381;
    mapSize[7][52] = 381;

    mapSize[8][13] = 383;
    mapSize[8][12] = 48;

    mapSize[9][12] = 381;
    mapSize[10][12] = 74;
    mapSize[10][13] = 383;
    mapSize[10][14] = 383;
    mapSize[10][15] = 383;
    mapSize[10][16] = 383;
    mapSize[10][17] = 383;
    mapSize[10][18] = 383;
    mapSize[10][19] = 383;
    mapSize[11][12] = 381;
    mapSize[12][12] = 76;
    mapSize[12][13] = 383;
    mapSize[12][14] = 383;
    mapSize[12][15] = 383;
    mapSize[12][16] = 383;
    mapSize[12][17] = 383;
    mapSize[12][18] = 383;
    mapSize[12][19] = 383;
    mapSize[13][12] = 381;
    mapSize[14][12] = 72;

    mapSize[14][13] = 383;
    mapSize[14][14] = 383;
    mapSize[14][15] = 383;
    mapSize[14][16] = 383;
    mapSize[14][17] = 383;
    mapSize[14][18] = 383;
    mapSize[14][19] = 383;
    // mapSize[15][12] = 381;
    // mapSize[16][12] = ;











    mapSize[7][12] = 381;
    mapSize[6][12] = 29;

    mapSize[8][11] = 383;
    mapSize[8][10] = 47;
    mapSize[7][10] = 381;
    mapSize[6][10] = 28;
    mapSize[5][10] = 381;

    mapSize[6][11] = 383;
    mapSize[6][13] = 383;

    mapSize[8][9] = 383;
    mapSize[8][8] = 46;
    mapSize[9][8] = 381;
    mapSize[10][8] = 381;
    mapSize[11][8] = 381;
    mapSize[11][7] = 382;
    mapSize[12][8] = 71;
    mapSize[12][9] = 382; 
    mapSize[13][10] = 382;
    mapSize[14][11] = 383;
    mapSize[7][8] = 381;
    mapSize[6][8] = 381;
    mapSize[5][8] = 381;

    mapSize[8][7] = 383;
    mapSize[8][6] = 45;
    mapSize[7][6] = 381;
    mapSize[6][6] = 381;
    mapSize[5][6] = 381;

    mapSize[8][5] = 383;
    mapSize[8][4] = 44;
    mapSize[7][4] = 381;
    mapSize[6][4] = 381;
    mapSize[5][4] = 381;

    mapSize[8][3] = 383;
    mapSize[8][2] = 43;
    mapSize[9][3] = 382;
    mapSize[9][4] = 383;
    mapSize[10][5] = 382;
    mapSize[7][2] = 381;
    mapSize[6][2] = 381;
    mapSize[5][2] = 381;


    mapSize[11][6] = 70;
    mapSize[10][6] = 381;
    mapSize[9][6] = 381;
    
    mapSize[12][41] = 383;
    mapSize[12][43] = 383;
    mapSize[12][45] = 383;
    mapSize[12][47] = 383;
    mapSize[12][49] = 383;
}