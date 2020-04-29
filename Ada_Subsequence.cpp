#include <iostream>

using namespace std;

int main() {
    int len1, len2;
    int values[26];
    string word1;
    string word2;
    cin >> len1 >> len2;
    for(int i=0; i<26; i++) {
        cin >> values[i];
    }
    cin >> word1 >> word2;
    int ans[len1][len2];
    for(int i=0; i<word1.size(); i++) {
        for(int j=0; j<word2.size(); j++) {
            if(i==0 || j==0) {
                if(word1.at(i) == word2.at(j)) {
                    char c = word1.at(i);
                    int val = values[(int) c%32 -1];
                    ans[i][j] = val;
                } else {
                    if(i > 0) {
                        ans[i][j] = ans[i-1][j];
                    } else if(j > 0) {
                        ans[i][j] = ans[i][j-1];
                    } else {
                        ans[i][j] = 0;
                    }
                }
            } else if(word1.at(i) == word2.at(j)) {
                char c = word1.at(i);
                int val = values[(int) c%32 -1];
                ans[i][j] = val + ans[i-1][j-1];
            } else {
                ans[i][j] = max(ans[i-1][j], ans[i][j-1]);
            }
        }
    }
    cout << ans[len1-1][len2-1];
}