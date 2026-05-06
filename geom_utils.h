#ifndef GEOM_UTILS_H
#define GEOM_UTILS_H

#include <iostream>
#include <cmath>
using namespace std;

// Для Begin16: структура з двома координатами на числовій осі
struct Point
{
    double x1;
    double x2;
};

// Функція для обчислення відстані між точками
double calculateDistance(const Point& p);

// Для Boolean36: структура з координатами двох полів шахової дошки
struct RookMove
{
    int x1, y1;  // перше поле
    int x2, y2;  // друге поле
};

// Перевірка, чи може ладдя перейти за один хід
bool canRookMove(const RookMove& rm);

#endif
