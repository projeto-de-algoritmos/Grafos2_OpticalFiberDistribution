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

void Map2D::generateNodes()
{

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
    mapSize[14][11] = 382;
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
    mapSize[9][4] = 382;
    mapSize[10][5] = 382;
    mapSize[7][2] = 381;
    mapSize[6][2] = 381;
    mapSize[5][2] = 381;


    mapSize[11][6] = 70;
    mapSize[10][6] = 381;
    mapSize[9][6] = 381;
    
}