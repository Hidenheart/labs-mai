#include <iostream>
using namespace std;
#include <windows.h>

 
 
 
 
using namespace std;
int main ()
{
  SetConsoleCP(1251);
 SetConsoleOutputCP(1251);
        char filename [50];
        char str [100];
        cout << "Введите имя создаваемого файла\n";
        cin.getline (filename, 50);
        FILE* f;
f = fopen (filename, "wt");
 
 
                cin.getline (str, 100);
                fprintf (f, "%s", str);
                fprintf (f, "\n");
        
 
        return 0;
}
