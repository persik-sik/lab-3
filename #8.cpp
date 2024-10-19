#include <iostream>
using namespace std;
int main()
{
    string word;
    int m, n;
    cout << " Введите слово: ";
    cin >> word;
    cout << " Введите начало: ";
    cin >> m;
    cout << " Введите конец: ";
    cin >> n;

    cout << word.substr(m-1, n-m);
    return 0;
}
