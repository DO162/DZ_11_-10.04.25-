#include "header.h"

int main()
{
    SetConsoleOutputCP(1251);

//---------------------------------Задание 1-----------------------------------
    
    cout << "#1\n\n";

    const int SIZE = 10;
    int arr[SIZE];

    cout << "Масив: ";
    double arith = arithmetic_mean(arr, SIZE);

    cout << "Середнє арифметичне чисел масиву: " << arith << "\n\n";

//---------------------------------Задание 2-----------------------------------

    cout << "#2\n\n";

    const int Q = 20;
    int mass[Q];

    min_max_mass(mass, Q);

//---------------------------------Задание 3-----------------------------------
		
    cout << "\n#3\n\n";

    const int P = 10;
    int m[P] = { 1,2,3,4,5,6,7,8,9,10 };

	reverse_mass(m, P);
	
}