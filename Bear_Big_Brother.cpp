#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << (int) (log(b/a)/log(1.5)) + 1;
}
