#include <iostream>

using namespace std;

int main()
{
    int *arr; // указатель дл€ выделени€ пам€ти под массив	
    int size; // размер массива
    
    // ввод количества элементов массива
    cout << "n = ";
    cin >> size;

    if (size <= 0) {
        // размер массива должен быть положительным
        cerr << "Invalid size" << endl;
        return 1;
    }

    arr = new int[size]; // выделение пам€ти под массив

    // заполнение массива
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }

    int temp; // временна€ переменна€ дл€ обмена элемента массива

    // сортировка массива пузырьком
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // мен€ем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // вывод отсортированного массива на экран
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete [] arr; // освобождение пам€ти;
    
    return 0;
}
