#include <iostream>
#include <windows.h>

using namespace std;

HWND hwnd = GetConsoleWindow();
HDC hdc = GetDC(hwnd);
const int X = 18, Y = 18;

void Right(float& x, float& y, int& Xmax, int& Ymax)//функция движения вправо (k=0); 
{
    Xmax += X;
    for (x; x < Xmax; x += 0.1)
        SetPixel(hdc, x, y, RGB(0, 255, 0)); //рисуется линия зеленого цвета;
}
void Left(float& x, float& y, int& Xmax, int& Ymax)//функция движения влево (k=0);
{
    Xmax -= X;
    for (x; x > Xmax; x -= 0.1)
        SetPixel(hdc, x, y, RGB(0, 255, 0));
}
void Down(float& x, float& y, int& Xmax, int& Ymax) //функция движения вниз (k=0);
{
    Ymax += Y;
    for (y; y < Ymax; y += 0.1)
        SetPixel(hdc, x, y, RGB(0, 255, 0));
}
void Up(float& x, float& y, int& Xmax, int& Ymax)//функция движения вверх (k=0); 
{
    Ymax -= Y;
    for (y; y > Ymax; y -= 0.1)
        SetPixel(hdc, x, y, RGB(0, 255, 0));
}
void Right_1(float& x, float& y, int& Xmax, int& Ymax) //функция движения вправо (k=1);
{
    Right(x, y, Xmax, Ymax);
    Down(x, y, Xmax, Ymax);
    Right(x, y, Xmax, Ymax);
    Up(x, y, Xmax, Ymax);
    Up(x, y, Xmax, Ymax);
    Right(x, y, Xmax, Ymax);
    Down(x, y, Xmax, Ymax);
    Right(x, y, Xmax, Ymax);
}
void Down_1(float& x, float& y, int& Xmax, int& Ymax) //функция движения вниз (k=1);
{
    Down(x, y, Xmax, Ymax);
    Left(x, y, Xmax, Ymax);
    Down(x, y, Xmax, Ymax);
    Right(x, y, Xmax, Ymax);
    Right(x, y, Xmax, Ymax);
    Down(x, y, Xmax, Ymax);
    Left(x, y, Xmax, Ymax);
    Down(x, y, Xmax, Ymax);
}

void Left_1(float& x, float& y, int& Xmax, int& Ymax) //функция движения влево (k=1);
{
    Left(x, y, Xmax, Ymax);
    Up(x, y, Xmax, Ymax);
    Left(x, y, Xmax, Ymax);
    Down(x, y, Xmax, Ymax);
    Down(x, y, Xmax, Ymax);
    Left(x, y, Xmax, Ymax);
    Up(x, y, Xmax, Ymax);
    Left(x, y, Xmax, Ymax);
}

void Up_1(float& x, float& y, int& reachX, int& reachY) //функция движения вверх (k=1);
{
    Up(x, y, reachX, reachY);
    Right(x, y, reachX, reachY);
    Up(x, y, reachX, reachY);
    Left(x, y, reachX, reachY);
    Left(x, y, reachX, reachY);
    Up(x, y, reachX, reachY);
    Right(x, y, reachX, reachY);
    Up(x, y, reachX, reachY);
}

void Right_2(float& x, float& y, int& Xmax, int& Ymax) //функция движения вправо (k=2);
{
    Right_1(x, y, Xmax, Ymax);
    Down_1(x, y, Xmax, Ymax);
    Right_1(x, y, Xmax, Ymax);
    Up_1(x, y, Xmax, Ymax);
    Up_1(x, y, Xmax, Ymax);
    Right_1(x, y, Xmax, Ymax);
    Down_1(x, y, Xmax, Ymax);
    Right_1(x, y, Xmax, Ymax);
}


void Down_2(float& x, float& y, int& Xmax, int& Ymax)//функция движения вниз (k=2);
{
    Down_1(x, y, Xmax, Ymax);
    Left_1(x, y, Xmax, Ymax);
    Down_1(x, y, Xmax, Ymax);
    Right_1(x, y, Xmax, Ymax);
    Right_1(x, y, Xmax, Ymax);
    Down_1(x, y, Xmax, Ymax);
    Left_1(x, y, Xmax, Ymax);
    Down_1(x, y, Xmax, Ymax);
}

void Left_2(float& x, float& y, int& Xmax, int& Ymax) //функция движения влево (k=2);
{
    Left_1(x, y, Xmax, Ymax);
    Up_1(x, y, Xmax, Ymax);
    Left_1(x, y, Xmax, Ymax);
    Down_1(x, y, Xmax, Ymax);
    Down_1(x, y, Xmax, Ymax);
    Left_1(x, y, Xmax, Ymax);
    Up_1(x, y, Xmax, Ymax);
    Left_1(x, y, Xmax, Ymax);
}

void Up_2(float& x, float& y, int& Xmax, int& Ymax) //функция движения вверх (k=2);
{
    Up_1(x, y, Xmax, Ymax);
    Right_1(x, y, Xmax, Ymax);
    Up_1(x, y, Xmax, Ymax);
    Left_1(x, y, Xmax, Ymax);
    Left_1(x, y, Xmax, Ymax);
    Up_1(x, y, Xmax, Ymax);
    Right_1(x, y, Xmax, Ymax);
    Up_1(x, y, Xmax, Ymax);
}
void main()
{
    float x = 400, y = 100;
    int Xmax = 400, Ymax = 100;
    Right_2(x, y, Xmax, Ymax);
    Down_2(x, y, Xmax, Ymax);
    Left_2(x, y, Xmax, Ymax);
    Up_2(x, y, Xmax, Ymax);
    cin.ignore();
}
