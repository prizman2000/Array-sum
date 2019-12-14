#include <iostream>

using namespace std;

void Create_Mass(int *mass,int size) {

    for (int i = 0; i < size; i++) {

        cout << "Введите значение " << i << " элемента:";
        cin >> mass[i];
        cout << endl;
    }
    cout << endl;

}

void Show_Mass(int *mass, int size) {

    for (int i = 0; i < size; i++) {

        cout << "Значение " << i << " элемента:";
        cout << mass[i];
        cout << endl;
    }

}

void Sum_Mass(int *mass, int size) {

    int sum = 0;

    for (int i = 0; i < size; i++) {

        sum = sum + mass[i];
        cout << endl;
    }

    cout << sum;
}