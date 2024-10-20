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

    int n, p;
    for (int i = 0; i < 20; ++i) {
        if (v[i] < 0) {
            n = v[i];
            break;
        }
    }
    for (int i = 19; i > -1; --i) {
        if (v[i] > 0) {
            p = v[i];
            break;
        }
    }
    vector<int> vec;
    for (int i = 0; i<20; ++i){
        if (v[i] != n and v[i] != p){
            vec.push_back(v[i]);
        }
    }
    for (int num : vec) {cout << num << " ";}
    cout << endl;
    return 0;
}
