/*#include <iostream>
#include <math.h>
using namespace std;


int main() {
    float a, b, c, x, x_beg, x_end, dx, f;

    cout <<"Input a: ";
    cin >> a;
    cout <<"Input b: ";
    cin >> b;
    cout <<"Input c: ";
    cin >> c;
    cout <<"Input start otrezka: ";
    cin >> x_beg;
    cout <<"Input end otrezka: ";
    cin >> x_end;
    cout <<"Input step: ";
    cin >> dx;
    
    for (x = x_beg; x < x_end; x += dx) { 
        if ((x + 5) < 0 && c == 0){
            (f = (1/(a*x))-b);
        } else if (x + 5 > 0 && c != 0){
            (f = (x-a)/x);
        } else {
            (f = 10*x/(c - 4));
        }
        printf("Function F: %f\n", f);
    }
    
    return 0;
}
*/
/*  Циклические вычислительные процессы. Стр 128.
    Вариант 2
    Вычислить и вывести на экран в виде таблицы значения функции F на интервале
    от Хнач. до Хкон. с шагом dX.
        ФОРМУЛЫ
    где а, Ь, с — действительные числа.
    Функция F должна принимать действительное значение, если выражение
    (Ац И Вц) ИЛИ (Вц И Сц)
    не равно нулю, и целое значение в противном случае. Через Ац, Вц и Сц 
    обозначены целые части значений а, Ь, с, операции И и ИЛИ — поразрядные. 
    Значения а, Ь, с, Хнач., Хкон., dX ввести с клавиатуры.
*/