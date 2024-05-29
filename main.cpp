#include "Stop.h"
int main() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    Stop a;
    int timeStart, timeEnd, kollSitsInBus;
    cout << "Введите время начала и конца теста остановки" << endl;
    cin >> timeStart >> timeEnd;

    for (int i = timeStart; i < timeEnd; i++) {
        for (int j = 1; j <= 60; j++) {

            if (j % a.timeOfBus == 0) {

                kollSitsInBus = a.sitsInBus();
                cout << a.kollPeople << "    " << kollSitsInBus << endl;

                if (kollSitsInBus >= a.kollPeople)
                    a.kollPeople = 0;
                else {
                    a.kollPeople -= kollSitsInBus;
                    a.timeOfBus--;
                }
            }

            if (j % a.timeOf_1_PeopleOnStop == 0)
                a.kollPeople++;

        }

    }
    cout << "Оптимальное время прихода маршрутки " << a.timeOfBus << " мин" << endl;
}