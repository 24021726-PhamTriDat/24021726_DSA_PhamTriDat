#include <iostream>
using namespace std;

int a[100][100], n, m;

int tinhTong() {
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sum += a[i][j];
    return sum;
}

void xoaDong(int k) {
    for (int i = k; i < n - 1; i++)
        for (int j = 0; j < m; j++)
            a[i][j] = a[i + 1][j];
    n--;
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    cout << "Tong: " << tinhTong() << endl;
    int k;
    cin >> k;
    xoaDong(k);

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << a[i][j] << " ";
        cout << endl;
    }
}