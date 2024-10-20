#include <vector>
#include <random>
#include <iostream>
using namespace std;
int main() {
    vector<int> v = generate_random_vector<int>(10, -100, 50);
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    int s = 0;
    for (int i = 0; i<10; ++i) {
        s += v[i];
    }
    cout << s << endl;

    int su2 = 0;
    for (int i = 0; i<10; ++i) {
        su2 += v[i]*v[i];
    }
    cout << su2 << endl;

    int s6 = 0;
    for (int i = 0; i<6; ++i) {
        s6 += v[i];
    }
    cout << s6 << endl;

    int sk = 0;
    int k1, k2;
    cout << "Введите k1: ";
    cin >> k1;
    cout << "Введите k2: ";
    cin >> k2;
    for (int i = k1; i <= k2; ++i) {
        sk += v[i];
    }
    cout << sk << endl;

    float w = s;
    cout << double(w/10) << endl;

    int s1, s2;
    float ss = 0;
    cout << "Введиде s1: ";
    cin >> s1;
    cout << "Введиде s2: ";
    cin >> s2;
    for (int i = s1; i <= s2; ++i) {
        ss += v[i];
    }
    cout << ss/(s2-s1+1);
    return 0;
}
