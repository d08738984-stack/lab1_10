#ifndef TIME_UTILS_H
#define TIME_UTILS_H

#include <iostream>
using namespace std;

// Структура TTime (з Param71)
struct TTime
{
    int hour;   // години (0-23)
    int min;    // хвилини (0-59)
    int sec;    // секунди (0-59)
};

// Перевірка, чи час правильний
bool isValidTime(const TTime& t);

// Процедура PrevHour (змінює час на -1 годину)
void PrevHour(TTime* t);

// Виведення часу
void printTime(const TTime& t);

#endif
