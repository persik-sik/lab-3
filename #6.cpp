#include <iostream>
using namespace std;
int main()
{
    string f_1, f_2;
    cout << "Введите первую фамилию: ";
    cin >> f_1;
    cout << "Введите вторую фамилию: ";
    cin >> f_2;
    if (f_1.size() > f_2.size()) cout << " Первая длиннее" << endl;
    if (f_1.size() < f_2.size()) cout << " Вторая длиннее" << endl;
    if (f_1.size() == f_2.size()) cout << "Одинаковой длины" << endl;
    return 0;
}
