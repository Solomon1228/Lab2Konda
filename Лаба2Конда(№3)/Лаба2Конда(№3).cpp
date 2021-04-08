// Лаба2Конда(№3).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
double line(double ya, double xa, double yb, double xb, double x)
{
    return ((ya - yb) / (xa - xb)) * x + (yb * xa - ya * xb) / (xa - xb);
}
double cir(double x, double y, double xc, double yc)
{
    return (x-xc)*(x-xc)+(y-yc)*(y-yc);
}

int main()
{

    setlocale(LC_ALL, "Russian");
    double x, y; int k1 = 0, k2 = 0;
    cout << "\tВведите координаты точки : ";
    cin >> x;
    cin >> y;
    if (y >= line(-1, -1, -4, 1, x) && y <= line(-4, 1, -1, 0, x) && y <= -1) { k1++; } 
    if (y <= line(-1, 0, 1, -2, x) && cir(x, y, -1, 1) <= 4 && y <= 1 && y>= -1) { k1++; }
    if (y >= 0 && y >= line(1, -2, 0, 2, x) && y <= line(0, 2, 2, 0, x) && cir(x, y, -1, 1) <= 4 && y <= 2) { k1++; }
    if (y >= line(2, 0, 5, 2, x) && y < 5 && x >= -1 && y>3 ) { k1++; }
    if (cir(x, y, -1, 1) <= 4 && y >= line(2, 0, 5, 2, x)&& y>=2 && y<=3) { k1++; }
    if (k1 != 0)
    {
        cout << "Точка в первой области" << endl;
        cout << "Точка не во второй области" << endl;
    }
    else
    {
        if (cir(x, y, 4, -1) <= 4 && y <= line(-2, 6, -3, 7, x)&&y>=-3 && y<=0 && y <= line(-2, 3, 0, 4, x)) {k2++;}
        if (y >= line(-3, 7, -5, 5, x) && y >= line(-5, 5, -4, 3, x) && y <= line(-4, 3, -3, 4, x)&&y<=-3) { k2++; }
        if (y <= line(-1, 2, -2, 3, x)&& y>=-2 && cir(x, y, 4, -1) <= 4){k2++;}
        if (y >= line(0, 4, 1, 2, x) && cir(x, y, 4, -1) <= 4 && y >= 0 && y <= 1) { k2++; }
        if (y <= line(1, 2, 4, 3, x) && y <= line(4, 3, 1, 4, x) && y >= 1) { k2++; }
        if (k2 != 0)
        {
            cout << "Точка во второй " << endl;
            cout << "Точка не в первой области области" << endl;
        }
        else
        {
            cout << "Точка ни в одной из областей" << endl;
        }
    }
    return 0;
}
   
