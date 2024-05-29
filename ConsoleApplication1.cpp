#include "Stop.h"
#include <iostream>
using namespace std;
 
 
Stop::Stop()
{
    inStop();
}
 
Stop::Stop(int endStop, int timeOf_1_PeopleOnStop, int koll_N_People)
{
}
 
 
Stop::~Stop()
{
}
 
void Stop::echoMenu()
{
}
 
void Stop::echoCorrect()
{
    cout << "Увеличте частоту появления маршрутки"<<endl;
}
 
void Stop::inStop()
{
    cout << " 1 - конечная, 0 - не конечная" << endl;
    cin >> endStop;
    cout << "Время  появление одного человека на остановке в мин" << endl;
    cin >> timeOf_1_PeopleOnStop;
    cout << "Ограничение по количеству людей на остановке" << endl;
    cin>> koll_N_People;
    cout << "Среднее время появления маршрутки на остановке" << endl;
    cin >> timeOfBus;
}
 
int Stop::sitsInBus()
{
    return rand()% 15 + 0;
}