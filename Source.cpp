#include <iostream>
#include <Windows.h>
using namespace std;

struct stud
{
    char fio[3];
    char adress[10];
    int marks[5];
};

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    stud mas[20];
    int n;
    cout << "������� ���������� ���������: ";
    cin >> n;

    double* sr;
    sr = new double[n]; // ������ ������� ������

    for (int i = 0; i < n; i++)
    {
        cout << endl << "������� ���: ";
        cin >> mas[i].fio;
        cout << endl << "������� �����: ";
        cin >> mas[i].adress;

        for (int j = 0; j < 5; j++)
        {
            cout << endl << "������� " << j + 1 << " ������: ";
            cin >> mas[i].marks[j];
        }
    }

    for (int i = 0; i < n; i++)

    {
        double sum = 0;
        for (int j = 0; j < 5; j++)
        {
            sum += mas[i].marks[j];
        }
        sr[i] = sum / 5;
    }

    cout << endl << "������� ���� ���� 8,5 " << endl;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i].adress == "�����" && sr[i] >= 8.5)
        {
            k++;
            cout << mas[i].fio << endl;
        }
    }
    cout << "����� " << k << " ���������";
    delete[] sr;
    return 0;
}