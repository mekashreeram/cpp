#include <iostream>
#include <chrono>

using namespace std;
using namespace std :: chrono;

inline int add(int a, int b) {
    return a + b;
}

void add1() {
    int x = 10, y = 20, sum = 0;
    for(int i = 0; i < 999999990; i++) {
        sum = x + y;
    }
}

int main() {
    int x = 10, y = 20, sum = 0;
    auto start = high_resolution_clock :: now();
    for(int i = 0; i < 999999990; i++) {
        sum = add(x, y);
    }
    auto stop = high_resolution_clock :: now();

    auto duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken by inline function: " << duration.count() << " microseconds" << endl;



    start = high_resolution_clock :: now();
    add1();
    stop = high_resolution_clock :: now();

    duration = duration_cast<microseconds>(stop - start);

    cout << "Time taken without function: " << duration.count() << " microseconds" << endl;
}