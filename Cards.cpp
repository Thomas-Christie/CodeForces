#include <iostream>

using namespace std;

int main() {
    int n;
    int z=0;
    int o=0;
    int ones;
    string letters ;
    cin >> n;
    cin >> letters;
    sort(letters.begin(), letters.end());
    for(char c: letters) {
        if(c=='o') {
            o+=1;
        } else if(c=='z') {
            z+=1;
        }
    }
    ones = o-z;
    for(int i; i<ones; i++) {
        cout << "1 ";
    }
    for(int i; i<z; i++) {
        cout << "0 ";
    }
}
