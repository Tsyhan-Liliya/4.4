#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    double xp;
    double xk;
    double dX;
    y = 0;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dX = "; cin >> dX;
    cout << fixed;

    cout << setw(10) << "X" << setw(20) << "y" << endl;
    cout << "------------------------------" << endl;
    x = xp;
    while (x <= xk)

    {
        if (x <= -1 - R) y = 1;
        else if (x > -1 - R && x <= -1)
            y = -sqrt(R * R - pow(x + 1, 2));
        else if (x <= -1 && x <= 2)
            y = -R;
        else if (x > 2)
            y = -R + ((0 - -R) / (4 - 2)) * (x - 2);

        cout << setw(10) << x << setw(20) << y << endl;
        x += dX;
    }
    cout << "---------------------------" << endl;
    cin.get();
    return 0;
}