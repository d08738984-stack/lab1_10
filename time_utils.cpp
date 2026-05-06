#include "time_utils.h"

// Перевірка коректності часу
bool isValidTime(const TTime& t)
{
    return (t.hour >= 0 && t.hour < 24) &&
           (t.min >= 0 && t.min < 60) &&
           (t.sec >= 0 && t.sec < 60);
}

// Зменшення часу на 1 годину
void PrevHour(TTime* t)
{
    // Якщо час неправильний — не міняємо
    if (!isValidTime(*t))
        return;

    // Зменшуємо години на 1
    t->hour--;

    // Якщо години стали від'ємними — переходимо на попередню добу (23 години)
    if (t->hour < 0)
        t->hour = 23;
}

// Виведення часу у форматі HH:MM:SS
void printTime(const TTime& t)
{
    if (!isValidTime(t))
    {
        cout << "Неправильний час!" << endl;
        return;
    }

    if (t.hour < 10) cout << "0";
    cout << t.hour << ":";
    if (t.min < 10) cout << "0";
    cout << t.min << ":";
    if (t.sec < 10) cout << "0";
    cout << t.sec << endl;
}
