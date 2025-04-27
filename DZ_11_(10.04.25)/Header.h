#include <iostream>
#include <algorithm> 
#include <windows.h>
#include <iterator>
using namespace std;

//-----------------

double arithmetic_mean(int arr[], const int SIZE) {
    srand(time(0));

    double sum_arithmetic_mean = 0;

    for (int i = 0; i < SIZE; ++i) {
        arr[i] = rand() % 20;

        cout << arr[i] << ", ";

        sum_arithmetic_mean += arr[i];
    }
    cout << "\n";
    return sum_arithmetic_mean / SIZE;
}

//-----------------

void min_max_mass(int mass[], const int Q) {
    srand(time(0));

    for (int i = 0; i < Q; ++i) {
        mass[i] = rand() % 20;
        cout << mass[i] << ", ";
    }

    cout << "\n\nМiнiмальний елемент масиву: " << *min_element(mass, mass + Q) << ", його індекс: " << distance(mass, min_element(mass, mass + Q)) << '\n';
    cout << "Максимальний елемент масиву: " << *max_element(mass, mass + Q) << ", його індекс: " << distance(mass, max_element(mass, mass + Q)) << '\n';
}

//-----------------

void reverse_mass(int m[], const int P) {

    cout << "Масив: ";
    for (int i = 0; i < P; ++i) {
        cout << m[i] << ", ";
    }

    cout << "\n\n";
    cout << "Перевернутий масив: ";

    reverse(m, m + P);
    for (int i = 0; i < P; ++i) {
        cout << m[i] << ", ";
    }
    cout << "\n\n";
}
