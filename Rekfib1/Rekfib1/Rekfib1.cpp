#include <iostream>
using namespace std;
int Fibonacci(int number)
{
	if (number == 0)
		//базовое или частное решение;
		return 0;
	if (number == 1)
		//базовое или частное решение;
		return 1;
	return Fibonacci(number - 1) + Fibonacci(number - 2);//ф-я вызывает саму себя; 
}
int main()
{
	setlocale(LC_ALL, "Rus");
	int m;
	cout << "введите количество чисел:" << endl;
	cin >> m;
	for (int i = 0; i < m; i++)
		cout << Fibonacci(i) << " ";//вызов рекурсивной ф-ии;
	system("pause");
	return 0;
}
