#include <iostream>

using namespace std;

int replace(int i) {
    if(i > 1) {
       return i-1;
    } else {
        return 9;
    }
}

int main() {
    int t;
    cin >> t;
    for(int i=0; i<t; i++) {
        int sudoku[81];
        int num;
        for(int j=0; j<9; j++) {
            cin >> num;
            for(int k=0; k<9; k++) {
                sudoku[9*j+(8-k)] = num%10;
                num /= 10;
            }
        }
        sudoku[0] = replace(sudoku[0]);
        sudoku[12] = replace(sudoku[12]);
        sudoku[24] = replace(sudoku[24]);
        sudoku[28] = replace(sudoku[28]);
        sudoku[40] = replace(sudoku[40]);
        sudoku[52] = replace(sudoku[52]);
        sudoku[56] = replace(sudoku[56]);
        sudoku[68] = replace(sudoku[68]);
        sudoku[80] = replace(sudoku[80]);
        for(int j=0; j<81; j++) {
            cout << sudoku[j];
            if(j > 0 && j%9==8) {
                cout << endl;
            }
        }
    }
}
