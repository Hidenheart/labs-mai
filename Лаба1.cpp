#include <iostream>
#include <conio.h>
using namespace std;
 
int main()
{
    setlocale(0, "");
    unsigned n, temp = 1;
    cout << "введите число: ";
    cin >> n;
    for (int i = 0; temp <= n; ++i)
    {
        if (n == temp)
        {
            cout << "YES" << endl;
            _getch();
            return 0;
        }
        temp *= 2;
    }
    cout << "NO" << endl;
    _getch();
    
    return 0;
}

