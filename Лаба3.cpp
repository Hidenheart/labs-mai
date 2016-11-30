#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream fp("example.txt", ios::in);
    if (fp.is_open()) {
        // Если файл открыт успешно
        // Получение размера файла
        fp.seekg (0, fp.end);
        int length = fp.tellg();
        char *buffer = new char[length];
        fp.seekg (0, fp.beg);
        // Считывание данных из файла
        fp.read(buffer, length);
        // Закрытие файла
        fp.close();
        // Вывод данных на экран
        cout << buffer;
        // Удаление буфера, в котором сохранен контент
        // файла
        delete [] buffer;
    } else {
        cerr << "Ошибка открытия файла example.txt" << endl;
    }
    return 0;
}
