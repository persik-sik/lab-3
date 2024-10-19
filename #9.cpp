#include <iostream>
using namespace std;
int main()
{
    string word;
    cout << " Введите слово: ";
    cin >> word;
    int len = word.size();
    cout << string(len, '*') << word << string(len, '*');
    return 0;
}
