#include <iostream>
using namespace std;
int main()
{
    string c[3];
    int mic = 10000000;
    int mac = 0;
    int ai, aj;
    cout << "Введите первый город: ";
    cin >> c[0];
    cout << "Введите второй город: ";
    cin >> c[1];
    cout << "Введите третий город: ";
    cin >> c[2];
    for (int i = 0; i < 2; ++i) {
        string a = c[i];
        string b = c[i+1];
        if (a.size() >= b.size() and a.size() >= mac) {
            mac = a.size();
            ai = i;
        }
        else if (a.size() <= b.size() and b.size() >= mac) {
            mac = b.size();
            ai = i+1;
        }

        if (a.size() <= b.size() and a.size() <= mic) {
            mic = a.size();
            aj = i;
        }
        else if (a.size() >= b.size() and b.size() <= mic) {
            mic = b.size();
            aj = i+1;
        }
    }
    cout << mac << " " << mic << endl;
    cout << c[ai] << " " << c[aj] << endl;
    return 0;
}
