#include <iostream>
using namespace std;

int main()
{
    int n, col, x;
    cin >> n;
    while(n > 1000)
    {
        cout << "Input n <= 1000" << endl;
        cin >> n;
    }
    col = 0;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        while(x > 30000)
        {
            cout << "Input x <= 30000" << endl;
            cin >> x;
        }
        if(x % 3 == 0){col = col + 1;}
    }
    cout << col << endl;
    return 0;
}
