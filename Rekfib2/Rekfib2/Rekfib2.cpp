#include <iostream>
using namespace std;
void Fibonacci()
{
    int N;
    cout << " Введите количество чисел:" << endl;
    cin >> N;
    int a = 0, b = 1, c;
    if (N == 0)
        cout << a; //частный случай;
    if (N == 1)
        cout << a << " " << b; //частный случай; 
    if (N >= 2)
    {
        cout << a << " " << b << " ";
        for (int i = 2; i < N; i++)
        {
            c = a + b; // вычисляем следующее число как сумму двух предыдущих
            a = b; b = c; // перемещаем два предыдущих числа
            cout << b << " ";
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    Fibonacci();//вызов ф-ии;
    system("pause");
    return 0;
}
