#include <math.h>
#include <iostream>
using namespace std;

int main() {
    double d, x1, x2;
    int a, b, c;

    cin >> a;
    cin >> b;
    cin >> c;

    d = pow(b, 2) - 4 * a * c;

    if(a != 0)
    {
        if(d > 0)
        {
            x1 = ( -b - pow(d, 0.5)) / (2 * a);
            x2 = ( -b + pow(d, 0.5)) / (2 * a);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        if(d == 0)
        {
            x1 = -b / (2 * a);
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x1 << endl;
        }
        if(d < 0)
        {
            d = -d;
            cout << "x1 = " << -b / (2 * a) << " + " << pow(d, 0.5) / (2 * a) <<"i" << endl;
            cout << "x1 = " << -b / (2 * a) << " - " << pow(d, 0.5) / (2 * a) <<"i" << endl;;
        }
    }
    if(a == 0 && b != 0 && c != 0)
    {
        cout <<"x = "<< -c / b<< endl;
    }
    if(a == 0 && b == 0 && c != 0)
    {
        cout <<"решений нет"<< endl;
    }

    return 0;
}
