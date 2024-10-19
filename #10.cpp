#include <iostream>
using namespace std;
int main()
{
    string sent;
    cout << " Введите  предложение: ";
    getline(cin, sent);
    float count = 0;
    string a = "a";
    for(int i = 0; i < sent.size(); ++i) {
        if (sent[i] == a[0]) count++;
    }
    cout << double(count / sent.size()) << endl;
    return 0;
}
