#include <iostream>

using namespace std;

int main()
{
    int *arr; // указатель для выделения памяти под массив
    int size; // размер массива
    
    // Ввод количества элементов массива
    cout << "n = ";
    cin >> size;

    if (size <= 0) {
        // Размер масива должен быть положитлеьным
        cerr << "Invalid size" << endl;
        return 1;
    }

    arr = new int[size]; // выделение памяти под массив

    // заполнение массива
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    // Нахождение максимального элемента
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Вывод результата на экран
    cout << "max = " << max << endl;

    delete [] arr; // освобождение памяти
    
    return 0;
}
