#include <iostream>
using namespace std;
int main()
{
    string city;
    cout << "Введите название города: ";
    cin >> city;
    if (city.size() % 2 == 0) cout << "Чётно" << endl;
    else cout << "Нечётно" << endl;
    return 0;
}
