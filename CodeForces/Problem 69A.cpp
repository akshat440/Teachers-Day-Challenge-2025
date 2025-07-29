#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // number of forces

    int x = 0, y = 0, z = 0; // initialize sum of each component to 0

    for (int i = 0; i < n; ++i) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi; // read each vector

        x += xi; // add x-component
        y += yi; // add y-component
        z += zi; // add z-component
    }

    // check if total force is zero in all directions
    if (x == 0 && y == 0 && z == 0) {
        cout << "YES" << endl; // in equilibrium
    } else {
        cout << "NO" << endl;  // not in equilibrium
    }

    return 0;
}
