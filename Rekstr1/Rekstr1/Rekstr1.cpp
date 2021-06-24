#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;
string vivod(string* s, int N)
{
    if (N == 1)
        return s[0];
    else
    {
        return s[N - 1] + " " + vivod(s, N - 1) + " ";

    };
}
int main()
{
    setlocale(LC_ALL, "Russian");
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
    cout << "Полученный результат:" << " " << vivod(Text, M) << endl;
    system("pause");
    return 0;
}
