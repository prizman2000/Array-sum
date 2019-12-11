#include <iostream>
#include "lib.h"

using namespace std;

int main() {

    int size = 0;
    cout << "Введите размер вашего массива:";
    cin >> size;
    cout << endl;

    int *mass = new int[size];

    Create_Mass(mass, size);

    Show_Mass(mass, size);

    Sum_Mass(mass, size);


    return 0;
}