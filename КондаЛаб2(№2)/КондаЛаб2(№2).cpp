// КондаЛаб2(№2).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
double F(double x) {
    double f;
    if (x > -1)
        f = abs(x - 5);
    else
        if (x <= 2 && x >= -1)
            f = cos(x - 5) / abs(2 * x + 2);
        else
            if (x == -1 || x == 2)
                f = 100;
            else
                f = exp(x + exp(1));

    return f;
}
int main()
{
    double x;
    cout << "\tVvedite x = ";
    cin >> x;
    cout << "\tf(x) = " << F(x) << endl;
    cout << "\t";
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
