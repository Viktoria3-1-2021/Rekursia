#include <iostream>
#include <windows.h>

using namespace std;

HWND hwnd = GetConsoleWindow();
HDC hdc = GetDC(hwnd);
const int X = 18, Y = 18;

void Rigth(float& x, float& y, int& Xmax, int& Ymax) //движение вправо (к=0); 
{
    Xmax += X;
    for (x; x < Xmax; x += 0.05)
        SetPixel(hdc, x, y, RGB(0, 0, 255));// линия синего цвета (к=0); 
}

void Left(float& x, float& y, int& Xmax, int& Ymax) //движение влево (к=0);
{
    Xmax -= X;
    for (x; x > Xmax; x -= 0.05)
        SetPixel(hdc, x, y, RGB(0, 0, 255));
}

void RigthUp(float& x, float& y, int& Xmax, int& Ymax)//движение в правый верхний угол (к=0);
{
    Xmax += X;
    Ymax -= Y;
    for (x, y; x < Xmax; x += 0.05, y -= 0.05)
        SetPixel(hdc, x, y, RGB(0, 0, 255));
}

void RigthDown(float& x, float& y, int& Xmax, int& Ymax) //движение в правый нижний угол (к=0);
{
    Xmax += X;
    Ymax += Y;
    for (x, y; x < Xmax; x += 0.05, y += 0.05)
        SetPixel(hdc, x, y, RGB(0, 0, 255));
}

void LeftUp(float& x, float& y, int& Xmax, int& Ymax) //движение в левый верхний угол (к=0); 
{
    Xmax -= X;
    Ymax -= Y;
    for (x, y; x > Xmax; x -= 0.05, y -= 0.05)
        SetPixel(hdc, x, y, RGB(0, 0, 255));
}

void LeftDown(float& x, float& y, int& Xmax, int& Ymax)//движение в левый нижний угол (к=0);
{
    Xmax -= X;
    Ymax += Y;
    for (x, y; x > Xmax; x -= 0.05, y += 0.05)
        SetPixel(hdc, x, y, RGB(0, 0, 255));
}

void Rigth_1(float& x, float& y, int& Xmax, int& Ymax) //движение вправо (к=1);
{
    Rigth(x, y, Xmax, Ymax);
    RigthUp(x, y, Xmax, Ymax);
    RigthDown(x, y, Xmax, Ymax);
    Rigth(x, y, Xmax, Ymax);
}

void RigthUp_1(float& x, float& y, int& Xmax, int& Ymax)
{
    RigthUp(x, y, Xmax, Ymax);
    LeftUp(x, y, Xmax, Ymax);
    Rigth(x, y, Xmax, Ymax);
    RigthUp(x, y, Xmax, Ymax);
}

void RigthDown_1(float& x, float& y, int& Xmax, int& Ymax) //движение в правый нижний угол (к=1);
{
    RigthDown(x, y, Xmax, Ymax);
    Rigth(x, y, Xmax, Ymax);
    LeftDown(x, y, Xmax, Ymax);
    RigthDown(x, y, Xmax, Ymax);
}

void LeftUp_1(float& x, float& y, int& Xmax, int& Ymax) //движение в левый верхний угол (к=1);
{
    LeftUp(x, y, Xmax, Ymax);
    Left(x, y, Xmax, Ymax);
    RigthUp(x, y, Xmax, Ymax);
    LeftUp(x, y, Xmax, Ymax);
}

void LeftDown_1(float& x, float& y, int& Xmax, int& Ymax) //движение в левый нижний угол (к=1);
{
    LeftDown(x, y, Xmax, Ymax);
    RigthDown(x, y, Xmax, Ymax);
    Left(x, y, Xmax, Ymax);
    LeftDown(x, y, Xmax, Ymax);
}

void Rigth_2(float& x, float& y, int& Xmax, int& Ymax) //движение вправо (к=2); 
{
    Rigth_1(x, y, Xmax, Ymax);
    RigthUp_1(x, y, Xmax, Ymax);
    RigthDown_1(x, y, Xmax, Ymax);
    Rigth_1(x, y, Xmax, Ymax);
}

void RigthUp_2(float& x, float& y, int& Xmax, int& Ymax) //движение в правый верхний угол (к=2);
{
    RigthUp_1(x, y, Xmax, Ymax);
    LeftUp_1(x, y, Xmax, Ymax);
    Rigth_1(x, y, Xmax, Ymax);
    RigthUp_1(x, y, Xmax, Ymax);
}

void RigthDown_2(float& x, float& y, int& Xmax, int& Ymax) //движение в правый нижний угол (к=2);
{
    RigthDown_1(x, y, Xmax, Ymax);
    Rigth_1(x, y, Xmax, Ymax);
    LeftDown_1(x, y, Xmax, Ymax);
    RigthDown_1(x, y, Xmax, Ymax);
}

void main()
{
    float x = 100, y = 200;
    int Xmax = 100, Ymax = 200;
    Rigth_2(x, y, Xmax, Ymax);
    RigthUp_2(x, y, Xmax, Ymax);
    RigthDown_2(x, y, Xmax, Ymax);
    Rigth_2(x, y, Xmax, Ymax);
    cin.ignore();
}
