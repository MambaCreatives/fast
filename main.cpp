#include <iostream>
using namespace std;

int minimum(int a, int b, int c) {
    int min_val = a;

    if (b < min_val) {
        min_val = b;
    }

    if (c < min_val) {
        min_val = c;
    }

    return min_val;
}

int main() {
    int x = 10;
    int y = 20;
    int z = 5;

    int min_val = minimum(x, y, z);

    cout << "The minimum value is: " << min_val << endl;

    return 0;
}
