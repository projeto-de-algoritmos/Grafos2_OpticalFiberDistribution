#include "../inc/Engine.h"

Engine::Engine()
{
  addEdge(1, 2, 52);
  addEdge(2, 3, 61);
  addEdge(3, 4, 64);
  addEdge(4, 5, 54);
  addEdge(5, 6, 57);
  addEdge(6, 7, 64);
  addEdge(7, 8, 61);
  addEdge(8, 9, 62);
  addEdge(9, 10, 59);
  addEdge(10, 11, 58);
  addEdge(11, 12, 57);
  addEdge(12, 13, 51);
  addEdge(13, 14, 53);
  addEdge(14, 15, 51);
  addEdge(15, 16, 55);
  addEdge(16, 17, 39);
  addEdge(17, 34, 47);
  addEdge(1, 18, 154);
  addEdge(2, 19, 171);
  addEdge(3, 20, 165);
  addEdge(4, 21, 159);
  addEdge(5, 22, 1160);
  addEdge(6, 23, 115);
  addEdge(23, 26, 44);
  addEdge(23, 24, 59);
  addEdge(7, 24, 114);
  addEdge(24, 25, 52);
  addEdge(8, 25, 114);
  addEdge(25, 27, 44);
  addEdge(9, 31, 161);
  addEdge(10, 32, 161);
  addEdge(11, 33, 161);
  addEdge(12, 53, 302);
  addEdge(13, 54, 300);
  addEdge(14, 55, 301);
  addEdge(15, 56, 302);
  addEdge(16, 57, 300);
  addEdge(34, 58, 250);
  addEdge(34, 59, 275);
  addEdge(15, 56, 302);
  addEdge(35, 60, 192);
  addEdge(36, 63, 189);
  addEdge(37, 64, 220);
  addEdge(38, 65, 222);
  addEdge(39, 66, 494);
  addEdge(40, 67, 177);
  addEdge(41, 68, 155);
  addEdge(18, 19, 53);
  addEdge(19, 20, 67);
  addEdge(20, 21, 57);
  addEdge(21, 22, 56);
  addEdge(22, 26, 66);
  addEdge(26, 27, 112);
  addEdge(27, 31, 62);
  addEdge(31, 32, 59);
  addEdge(32, 33, 58);
  addEdge(18, 42, 102);
  addEdge(19, 43, 132);
  addEdge(20, 44, 140);
  addEdge(21, 45, 139);
  addEdge(22, 46, 138);
  addEdge(26, 28, 48);
  addEdge(28, 47, 100);
  addEdge(28, 29, 62);
  addEdge(29, 30, 62);
  addEdge(29, 48, 62);
  addEdge(30, 49, 62);
  addEdge(26, 27, 112);
  addEdge(27, 30, 62);
  addEdge(31, 50, 143);
  addEdge(32, 51, 140);
  addEdge(33, 52, 142);
  addEdge(42, 43, 67);
  addEdge(43, 44, 60);
  addEdge(44, 45, 58);
  addEdge(45, 46, 59);
  addEdge(46, 47, 63);
  addEdge(47, 48, 48);
  addEdge(48, 49, 74);
  addEdge(49, 50, 61);
  addEdge(50, 51, 59);
  addEdge(51, 52, 42);
  addEdge(52, 53, 59);
  addEdge(53, 54, 58);
  addEdge(54, 55, 48);
  addEdge(55, 56, 49);
  addEdge(56, 57, 42);
  addEdge(57, 58, 49);
  addEdge(58, 59, 47);
  addEdge(59, 60, 49);
  addEdge(60, 61, 58);
  addEdge(61, 62, 60);
  addEdge(62, 63, 39);
  addEdge(63, 64, 56);
  addEdge(64, 65, 52);
  addEdge(65, 66, 56);
  addEdge(66, 67, 56);
  addEdge(67, 68, 52);
  addEdge(68, 69, 33);
  addEdge(43, 70, 180);
  addEdge(45, 70, 90);
  addEdge(46, 71, 150);
  addEdge(70, 71, 105);
  addEdge(48, 74, 79);
  addEdge(74, 76, 80);
  addEdge(76, 72, 61);
  addEdge(71, 72, 107);
  addEdge(74, 75, 228);
  addEdge(76, 77, 232);
  addEdge(72, 73, 43);
  addEdge(73, 78, 204);
  addEdge(73, 79, 225);
  addEdge(52, 75, 79);
  addEdge(75, 77, 80);
  addEdge(77, 78, 61);
  addEdge(78, 79, 32);
  addEdge(79, 80, 50);
  addEdge(53, 80, 299);
  addEdge(80, 81, 53);
  addEdge(54, 81, 299);
  addEdge(55, 82, 295);
  addEdge(81, 82, 55);
  addEdge(82, 83, 99);
  addEdge(56, 84, 98);
  addEdge(57, 85, 93);
  addEdge(58, 83, 289);
  addEdge(59, 86, 164);
  addEdge(86, 95, 54);
  addEdge(95, 97, 45);
  addEdge(95, 96, 49);
  addEdge(96, 98, 45);
  addEdge(83, 97, 46);
  addEdge(97, 98, 47);
  addEdge(86, 87, 59);
  addEdge(60, 87, 152);
  addEdge(87, 88, 53);
  addEdge(61, 88, 144);
  addEdge(88, 89, 60);
  addEdge(62, 89, 140);
  addEdge(89, 99, 97);
  addEdge(98, 99, 97);
  addEdge(89, 90, 59);
  addEdge(63, 90, 137);
  addEdge(90, 100, 100);
  addEdge(99, 100, 62);
  addEdge(64, 91, 133);
  addEdge(90, 91, 56);
  addEdge(91, 101, 99);
  addEdge(100, 101, 59);
  addEdge(65 , 92, 129);
  addEdge(91, 92, 58);
  addEdge(92, 102, 100);
  addEdge(101, 102, 56);
  addEdge(66, 93, 130);
  addEdge(92, 93, 52);
  addEdge(93, 103, 100);
  addEdge(102, 103, 45);
  addEdge(67, 94, 127);
  addEdge(93, 94, 54);
  addEdge(94 ,104, 96);
  addEdge(103, 104, 53);
  addEdge(104, 105, 40);
  addEdge(72, 78, 204);


}

Engine::~Engine()
{

}

void Engine::connectStreetAndTowers()
{

}

std::string mapConverter( int lines, int columns )
{
    return "Haha";
}