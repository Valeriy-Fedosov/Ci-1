#include <iostream>
using namespace std;

// display a number
float sum1(int n1, float n2) {
    cout << "Введите целое число " << n1<<endl;
    cout << "Введите действительное число  " << n2<<endl;
    return(n1 + n2);
}

int main() {
    int num1 = 5;
    double num2 = 5.5;
    double s;
    s = sum1(num1, num2);

    // calling the function
    cout << s;

    return 0;
}
