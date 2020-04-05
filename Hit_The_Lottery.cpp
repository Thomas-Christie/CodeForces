#include <iostream>

using namespace std;

int main() {
    int n;
    int bills=0;
    cin >> n;
    while(n > 0) {
        while(n >= 100) {
            bills += 1;
            n -= 100;
        }
        while(n >= 20) {
            bills+=1;
            n-=20;
        }
        while(n >= 10) {
            bills+=1;
            n-=10;
        }
        while(n >= 5) {
            bills+=1;
            n-=5;
        }
        while(n >= 1) {
            bills+=1;
            n-=1;
        }
    }
    cout << bills;
}
