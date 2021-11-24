
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int arr1[10], arr2[10], i, j, yi = 0, y = 0;
    // Цикл знаходить 10 елементів першого та другого масивів
    for (int i = 0; i <= 9; i++) { 
        arr1[i] = 115 + i;
        arr2[i] = 125 - 2 * i;
    }

    // Цикл знаходить кількість елементів третього масиву
    for (i = 0; i <= 9; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr1[i] == arr2[j]) {
                y++;
            }
        }
    }
    // Задаємо розмірність третього масиву
    int *arr3 = new int[y];

    // Цикл знаходить усі елементи третього масиву
    for (i = 0; i <= 9; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr1[i] == arr2[j]) {
                arr3[yi] = arr1[i];
                yi++;
            }
        }
    }
    int max = arr3[1];
    int Smax = arr3[0];
    // Цикл знаходить два максимальні елементи третього масиву
    for (i = 2; i < y; i++) {
        if (arr3[i] > max) {
            Smax = max;
            max = arr3[i];
        }
    }

    // Сума цих елементів
    int arr3MaxSum = max + Smax;

    // Вивід
    cout << "Первый массив:" << endl;
    cout << "{";
    for (int i = 0; i <= 9; i++) {
        cout << arr1[i] << " ";
    }
    cout << "}" << endl;

    cout << "Второй массив:" << endl;
    cout << "{";
    for (int i = 0; i <= 9; i++) {
        cout << arr2[i] << " ";
    }
    cout << "}" << endl;

    cout << "Третий массив:" << endl;
    cout << "{";
    for (int i = 0; i < y; i++) {
        cout << arr3[i] << " ";
    }
    cout << "}" << endl;

    cout << "Сумма двух максимальных элементов третьего массива:" << endl;
    cout << arr3MaxSum << endl;
}

