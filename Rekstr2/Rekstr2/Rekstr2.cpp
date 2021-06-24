#include <iostream>
#include <string>
using namespace std;
void main()
{
    setlocale(LC_ALL, "rus");
    const int N = 5;
    int M;
    string* Text = new string[N];
    cout << "Введите текст: ";
    for (int i = 0; i < N; i++) //заполнение массива с клавиатуры;
    {
        cin >> Text[i];
    }
    cout << "Введите количество 'элементов строки для вывода:" << endl;
    do { //проверка вводимого значения;
        cin >> M;
        if (M <= 0 and M > 5)
            cout << "Неправильный номер, повторите выбор:" << endl;
    } while (M <= 0 and M > 5); cout << endl;
    for (int i = M - 1; i >= 0; i--)  //вывод строки; 
    {
        cout << Text[i] << " ";
    }
    cout << endl;

    system("pause");
}
