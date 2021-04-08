// Лаба2Конда(№6).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
void F() {
    double a1, b1, a2, b2, xc, yc, x, y;
    cout << "Vvedite a1: "; cin >> a1; cout << endl;
    cout << "Vvedite b1: "; cin >> b1; cout << endl;
    cout << "Vvedite a2: "; cin >> a2; cout << endl;
    cout << "Vvedite b2: "; cin >> b2; cout << endl;
    cout << "Vvedite xc: "; cin >> xc; cout << endl;
    cout << "Vvedite yc: "; cin >> yc; cout << endl;
    cout << "Vvedite x: "; cin >> x; cout << endl;
    cout << "Vvedite y: "; cin >> y; cout << endl;
    double xx = ((x - xc) * (x - xc) / (a1 * a1)) + ((y - yc) * (y - yc) / (b1 * b1));
    double xxx = ((x - xc) * (x - xc) / (a2 * a2)) + ((y - yc) * (y - yc) / (b2 * b2));
    if (xx < 1) {
        cout << "vnutri 1 elipsa"<<endl;
    }
    else
        if (xx == 1) {
            cout << "granica 1 elipsa" << endl;
        }
        else
            cout << "ne vhodit v 1 elips" << endl;
    cout << endl;
    if (xxx < 1) {
        cout << "vnutri 2 elipsa" << endl;
    }
    else
        if (xxx == 1) {
            cout << "granica 2 elipsa" << endl;
        }
        else
            cout << "ne vhodit v 2 elips" << endl;
    return;
}
int main()
{
    F();
    system("pause");
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
