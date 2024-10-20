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
    for (int i = 0; i<10; ++i) {
        v[i] *= 2;
    }
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    int a;
    cout << " Введите а: ";
    cin >> a;
    for (int i = 0; i<10; ++i) {
        v[i] -= a;
    }
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;

    int q = v[0];
    if (q != 0){
        for (int i = 0; i<10; ++i) {
        v[i] /= q;
    }
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    }
    else cout << "Невозможно выполнить операцию";
    return 0;
}
