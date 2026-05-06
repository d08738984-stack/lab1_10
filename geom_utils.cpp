#include "geom_utils.h"

// Begin16: відстань між точками на числовій осі
double calculateDistance(const Point& p)
{
    return fabs(p.x2 - p.x1);
}

// Boolean36: перевірка ходу ладді
// Ладдя ходить по горизонталі або вертикалі на будь-яку кількість клітин
bool canRookMove(const RookMove& rm)
{
    // Перевірка, чи координати в межах 1-8
    if (rm.x1 < 1 || rm.x1 > 8 || rm.y1 < 1 || rm.y1 > 8 ||
        rm.x2 < 1 || rm.x2 > 8 || rm.y2 < 1 || rm.y2 > 8)
    {
        return false;
    }

    // Ладдя може перейти, якщо збігається x або y
    return (rm.x1 == rm.x2 || rm.y1 == rm.y2);
}
