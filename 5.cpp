#include <math.h>
#include <iostream>
using namespace std;

int main() {
    int a, b, c, a1, b1, c1;
    cout << "Введите стороны треугольника "<< endl;
    cin >> a;
    cin >> b;
    cin >> c;
    a1 = pow(a, 2);
    b1 = pow(b, 2);
    c1 = pow(c, 2);
    if(a + b > c && b + c > a && c + a > b)
    {
        if(a1 == b1 && b1 == c1)
        {
            cout << "Равностронний " << endl;
        }
        else
        {
            if(a1 + b1 == c1 || b1 + c1 == a1 || c1 + a1 == b1)
            {
                cout << "Прямоугольный " << endl;
            }
            if(a1 + b1 < c1 || b1 + c1 < a1 || c1 + a1 < b1)
            {
                cout << "Тупоугольный " << endl;
            }
            if(a1 + b1 > c1 && b1 + c1 > a1 && c1 + a1 > b1)
            {
                if(a1 == b1 || b1 == c1 || c1 == a1)
                {
                    cout << "Равнобедренный " << endl;
                }
                else
                {
                    cout << "Остроугольный " << endl;
                }
            }
        }
    }
    else
    {
        cout << "Треугольника не существует "<<endl;
    }
    return 0;
}
