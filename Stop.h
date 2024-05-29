#include <iostream>
using namespace std;
class Stop
{
public:
    Stop();
    Stop(int endStop, int timeOf_1_PeopleOnStop, int koll_N_People);
    ~Stop();


    int endStop;
    int kollPeople = 0;
    int timeOfBus;
    int koll_N_People;
    int timeOf_1_PeopleOnStop;


    void echoMenu();
    void echoCorrect();
    void inStop();
    int sitsInBus();

};