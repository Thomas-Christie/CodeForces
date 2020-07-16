#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    map<int, int> mp;
    vector<int> prices;
    cin >> n;
    for(int i=0;i<n;i++) {
        int price, quality;
        cin >> price >> quality;
        prices.push_back(price);
        mp.insert({price, quality});
    }
    sort(prices.begin(), prices.end());
    bool flag = false;
    int max_quality = 0;
    for(int i=0; i<n-1; i++) {
        int price = prices[i];
        int quality = mp.at(price);
        max_quality = max(max_quality, quality);
        if(max_quality > mp.at(prices[i+1])) {
            flag = true;
            break;
        }
    }
    if(flag== true) {
        cout << "Happy Alex";
    } else {
        cout << "Poor Alex";
    }
}
