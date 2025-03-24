#include <iostream>
using namespace std;

// display a number
float sum1(int n1, float n2) {
    cout << "Введите целое число " <<endl;
    cin >> n1;
    cout << "Введите действительное число  " <<endl;
    cin >> n2;
    return(n1 + n2);
}

float rus(float x1, float x2){
    cout << "Введите действительное число " << endl;
    cin >> x1;
    cout << "Введите действительное число " <<endl;
    cin >> x2;
    return(x1 - x2);
}

int main() {
    int num1;
    float num2, num3, num4;

    cout << "Сумма чисел "<< sum1(num1, num2) << endl;
    cout << "Разность чисел "<< rus(num3, num4) << endl;
    return 0;
}
