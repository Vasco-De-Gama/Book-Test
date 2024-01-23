#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
    const int C = 10;
    int i=0;
    int massive[C] = { 5, 10, -5, 8, -6, 4, 3, -7, 9, 2 };
    for (i = 0; i < C; i++) {
        cout << massive[i] << endl;
    }
    /*  randomizer?
        for (int i = 0; i < C; i++) {
        massive[i] = rand() % 10+(-10);
        cout << massive[i] << endl;
    }
    */
    int sum1 = 0;
    for (i = 0; i < C; i++) {
        if ((massive[i] % 2) != 0) {
            sum1 = sum1 + massive[i];
        }
    }
    cout << sum1 << endl;

    int sum2 = 0;
    int leftmin = 0;
    int rightmin = 0;
    for (i = 0; i < C; i++) {
        if (massive[i] < 0) {
            leftmin = i;
            break;
        }
    }
    for (i = C; i > 0; i--) {
        if (massive[i] < 0) {
            rightmin = i;
            break;
        }
        for (i = leftmin; i < rightmin; i++) {
            sum2 = sum2 + massive[i];
        }

       
        cout << sum2 << endl;
        return 0;
    }
}

/*  Одномерные массивы. Стр 136.
    Вариант 4
    В одномерном массиве, состоящем из п вещественных элементов, вычислить:
    1) сумму элементов массива с нечетными номерами;
    2) сумму элементов массива, расположенных между первым и последним отри­
    цательными элементами.
    3) Сжать массив, удалив из него все элементы, модуль которых не превышает 1. 
    Освободившиеся в конце массива элементы заполнить нулями.
*/