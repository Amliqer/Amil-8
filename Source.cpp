#include <iostream>
#include "fstream"
#include <algorithm>
#include <iterator>
#include <Windows.h>
#include <functional>
#include <array>
#include <vector>
using namespace std;

template<int n, typename T>
void InitMas(T* mas) 
{
    for (int i = 0; i < n; ++i)
    {
        cout << mas[i] << " ";
    }
}

template <typename T>
T maximum(T* mas, int n) 
{
    T maximum = mas[0];
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > maximum)
        {
            maximum = mas[i];
        }
    }
    return maximum;
}

template <typename T>
T minimum(T* mas, int n) 
{
    T minimum = mas[0];
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < minimum)
        {
            minimum = mas[i];
        }
    }
    return minimum;
}

template<typename T> 
T re(T* mas, int n)
{
    mas[3] = n * n;
}

int main()
{
    setlocale(0, "");
    system("Color F0");

    int mas[3] = { 1,2,3 };
    re(mas, 10);


    int* a; 

    const int n = 50; 

    a = new int[n]; 

    cout << "массив заполненный случайными числами" << endl << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() * 50 / RAND_MAX;
    }
    InitMas<n>(a);
    cout << "\n\nМаксимальный элемент массива - " << maximum(a, n);
    cout << "\n\nМинимальный элемент массива - " << minimum(a, n);
    cout << "\n\nreplace - " << re(a, n);
    cout << "замена элемента массива на переданное значение" << re(a, n) << endl;
    system("pause>>null");
    return 0;
}