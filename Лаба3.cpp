#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ifstream fp("example.txt", ios::in);
    if (fp.is_open()) {
        // ���� ���� ������ �������
        // ��������� ������� �����
        fp.seekg (0, fp.end);
        int length = fp.tellg();
        char *buffer = new char[length];
        fp.seekg (0, fp.beg);
        // ���������� ������ �� �����
        fp.read(buffer, length);
        // �������� �����
        fp.close();
        // ����� ������ �� �����
        cout << buffer;
        // �������� ������, � ������� �������� �������
        // �����
        delete [] buffer;
    } else {
        cerr << "������ �������� ����� example.txt" << endl;
    }
    return 0;
}
