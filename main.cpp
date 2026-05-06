#include <iostream>
#include "time_utils.h"
#include "geom_utils.h"

using namespace std;

void task1();
void task2();

int main()
{
    int choice;

    do
    {
        cout << "\n===================================\n";
        cout << "1 - Завдання 1 (Param75 - TTime, PrevHour)\n";
        cout << "2 - Завдання 2 (Begin16 + Boolean36)\n";
        cout << "0 - Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            task1();
            break;
        case 2:
            task2();
            break;
        case 0:
            cout << "Вихід.\n";
            break;
        default:
            cout << "Помилка! Невірний вибір.\n";
        }

    } while (choice != 0);

    return 0;
}

void task1()
{
    const int N = 5;
    TTime times[N];

    // Введення 5 моментів часу
    for (int i = 0; i < N; i++)
    {
        cout << "\nВведіть момент часу " << i + 1 << " (години хвилини секунди): ";
        cin >> times[i].hour >> times[i].min >> times[i].sec;
    }

    // Застосування PrevHour до кожного моменту
    for (int i = 0; i < N; i++)
    {
        cout << "\nПочатковий час " << i + 1 << ": ";
        printTime(times[i]);

        PrevHour(&times[i]);

        cout << "Після PrevHour: ";
        printTime(times[i]);
    }
}

void task2()
{
    int subchoice;

    do
    {
        cout << "\n--- Завдання 2 ---\n";
        cout << "1 - Begin16 (відстань між точками)\n";
        cout << "2 - Boolean36 (хід ладді)\n";
        cout << "0 - Назад\n";
        cout << "Ваш вибір: ";
        cin >> subchoice;
        cin.ignore();

        switch (subchoice)
        {
        case 1:
        {
            // Begin16
            Point p;
            cout << "Введіть координати x1 та x2: ";
            cin >> p.x1 >> p.x2;
            double dist = calculateDistance(p);
            cout << "Відстань між точками: |" << p.x2 << " - " << p.x1 << "| = " << dist << endl;
            break;
        }
        case 2:
        {
            // Boolean36
            RookMove rm;
            cout << "Введіть координати першого поля (x1 y1): ";
            cin >> rm.x1 >> rm.y1;
            cout << "Введіть координати другого поля (x2 y2): ";
            cin >> rm.x2 >> rm.y2;
            bool result = canRookMove(rm);
            cout << "Ладдя може перейти за один хід: " << (result ? "Так (true)" : "Ні (false)") << endl;
            break;
        }
        case 0:
            break;
        default:
            cout << "Помилка!\n";
        }

    } while (subchoice != 0);
}
