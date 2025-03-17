#include <math.h>
#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    int P;
    cout << "Введите стороны треугольника "<< endl;
    cin >> a;
    cin >> b;
    cin >> c;
    float s, p;
    if(a + b > c && b + c > a && c + a > b)
    {
        P = a + b + c;
        p = P / 2;
        s = p * (p - a) * (p -b) * (p - c);
        s = pow(s, 0.5);
        cout << "Периметр равен: " << p << endl;
        cout << "Площадь равна: " << s << endl;
    }
    else
    {
        cout << "Треугольника не существует "<<endl;
    }
    return 0;
}
