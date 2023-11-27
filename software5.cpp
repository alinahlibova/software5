#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

void checkValidInput()
{
    if (cin.fail())
    {
        throw "Incorrect input";
    }
}
void checkValidParams(int n)
{
    if (n < 2)
    {
        throw "Input correct data";
    }
}

int calculate(int n, int x)
{
    int y = 0;
    if (x < 0)
    {
        int i, p;
        i = 0;
        for (i = 0; i < n; i++) {
            p = 1;
            y = y + p;
        }
    }
    else {
        int i;
        for (i = 1; i <= n - 2; i++) {
            y = y + (i - x) * (i - x);
        }
    }
    return y;
}

int main()
{
    int x, n;

    try
    {
        cout << "Input n>=2 , n = ";
        cin >> n;
        checkValidInput();
        checkValidParams(n);

        cout << "Input x= ";
        cin >> x;
        checkValidInput();

        cout << "x= " << x << "y= " << calculate(n, x) << endl;
    }
    catch (const char* ex)
    {
        cout << ex << endl;
        return -1;
    }
    catch (...)
    {
        cout << "Unknown error" << endl;
        return -2;
    }
}
