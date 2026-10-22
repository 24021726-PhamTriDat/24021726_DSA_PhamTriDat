#include<iostream>
using namespace std;
void xoa(int a[], int &n, int k){
    for (int i = k ; i < n - 1; i++) a[i]= a[i + 1];
    n--;
}
void chen(int a[], int &n, int y, int m){
    for ( int i = n; i > m; i--) a[i] = a[i-1];
    a[m] = y;
    n++;
}
int main(){
    int a[100], n, k, m, y;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
        xoa(a, n, k);
    cin >> y >> m;
    chen(a, n, y, m);
    for (int i=0;i<n;i++){
        cout << a[i];
    }
}