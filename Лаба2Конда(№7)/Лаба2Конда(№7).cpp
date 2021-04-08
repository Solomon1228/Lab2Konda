// Лаба2Конда(№7).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Vvedite nomer nedeli: ";
    cin >> n;
    cout << endl;
    switch (n) {
    case 1:
        cout << "pn-Beg vt-prised sr-otjimaniya cht-otdix pt-press sb-beg vs-beg";
        break;
    case 2:
        cout << "pn-prised vt-press sr-otdix cht-beg pt-beg sb-prised vs-prised";
        break;
    case 3:
        cout << "pn-otdix vt-beg sr-beg cht-beg pt-press sb-press vs-otjim";
        break;
    case 4:
        cout << "pn-beg vt-otdix sr-press cht-otdix pt-presid sb- vs-otdix";
        break;
    case 5:
        cout << "pn-press vt-preised sr-otdix cht-press pt-beg sb-otjim vs-podtyagivanya";
        break;
    case 6:
        cout << "pn-otdix vt-beg sr-press cht-otjim pt-otdix sb-press vs-beg";
        break;
    case 7:
        cout << "pn-prisyad vt-beg sr-press cht-beg pt-otjim sb-beg vs-otdix";
        break;
    case 8:
        cout << "pn-otjim vt-press sr-beg cht-otdix pt-otjim sb-beg vs-beg";
        break;
    case 9:
        cout << "pn-beg vt-beg sr-beg cht-beg pt-beg sb-beg vs-otdix";
        break;
    case 10:
        cout << "pn-otjim vt-press sr-otjim cht-podtyagivanya pt-otdix sb-otdix vs-otdix";
        break;
    case 11:
        cout << "pn-beg vt-beg sr-press cht-prised pt-prised sb-press vs-otdix";
        break;
    case 12:
        cout << "pn-otdix vt-press sr-beg cht-beg pt-press sb-otdix vs-press";
        break;
    }
    cout << endl;
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
