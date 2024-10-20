#include <vector>
#include <random>
#include <iostream>
using namespace std;
int main() {
    vector<int> v = generate_random_vector<int>(20, -100, 50);
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    int a1 = v[0];
    int a2 = v[1];
    int a3 = v[2];
    v[0] = v[17];
    v[1] = v[18];
    v[2] = v[19];
    v[17] = a1;
    v[18] = a2;
    v[19] = a3;
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
