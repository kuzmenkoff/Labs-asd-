

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Ведите значение температуры по Цельсию." << endl;
	long double c, f, k;
	std::cin >> c; 
	f = c * 1.8 + 32; 
	k = c + 273.15;
	std::cout << "°F=" << f << endl;
	std::cout << "°K=" << k << endl;



}


