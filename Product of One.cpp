#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int zeros = 0;
    long long tot=0;
    for(int i=0; i<n; i++) {
        if(a[i]==0) {
            zeros+=1;
        } else {
            tot += min(abs(a[i]-1), abs(a[i]+1));
        }
    }
    if(zeros > 0) {
        cout << tot+zeros;
    } else {
        int prod = 1;
        for(int i=0; i<n; i++) {
            prod *= a[i];
            prod /= abs(a[i]);
        }
        if(prod < 0) {
            cout << tot+2;
        } else {
            cout << tot;
        }
    }
}