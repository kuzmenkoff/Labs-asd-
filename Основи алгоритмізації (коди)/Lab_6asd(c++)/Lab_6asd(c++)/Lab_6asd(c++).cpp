#include <iostream>
#include <cmath>
using namespace std;

bool func(int x);

int main()
{
	int n, i;
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите натуральное число n:" << std::endl;
	std::cout << "n = ";
	std::cin >> n; // Введення n
    for (i = 2; i <= n; i++) { // Цикл знаходить такі i, на які n ділиться націло
        if (n % i == 0) {
            if (func(i)) { // функція перевіряє і на простоту
                std::cout << i << endl; // виводимо і, якщо воно просте
            }
        }
    }


}

bool func(int x)
{
    int j;

    for (j = 2; j < x; j++) {
        if (x % j == 0) { // якщо остача від ділення числа на будь-яке j<x == 0, то число не є простим,
            return false; // тому повертаємо false
        }

        if (x == j + 1) { // якщо цикл дійде до того моменту, коли n ~ n,
            return true;  // то повертаємо true
        }
    }

}


