//created by @kurassh
//follow https://t.me/chtivvvo

#include <iostream>
using namespace std;
const int COL = 3;
const int ROW = 6;

void bbl2(int arr[COL][ROW]) {
    for (int s = 0; s < COL; s++) {
        for (int i = 0; i < ROW - 1; i++) {
            for (int j = 0; j < ROW - 1; j++) {
                if (arr[s][j] > arr[s][j + 1])
                    swap(arr[s][j], arr[s][j + 1]);
            }
        }
    }
}

void rtrn2(int arr[COL][ROW]) {
    for (int i = 0; i < COL; i++) {
        for (int j = 0; j < ROW; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
   
    int work[3][6];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> work[i][j];
        }
    }
    bbl2(work);
    rtrn2(work);

    return 0;
}