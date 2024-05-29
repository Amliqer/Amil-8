#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main()
{

    priority_queue <int> client_queue; 
    queue <string> time_queue; 
    int client = 0;
    string time = " ";
    int i = 0;
    cout << "Enter 5 users number..." << endl;
    while (i < 5)
    {
        cout << "Enter user number for request: ";
        cin >> client;
        cout << "Enter time for print(HH:MM): ";
        cin >> time;
        client_queue.emplace(client); 
        time_queue.emplace(time);
        i++;
    }

    cout << "Statistic queue user and prin-time: " << endl;
    while (!client_queue.empty())
    {
        cout << "User Number: " << client_queue.top() << " " << "Time: " << time_queue.front();
        cout << endl;
        client_queue.pop();
        time_queue.pop();

    }
    return 0;
}