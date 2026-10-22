#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    double a[1000];
    double tong = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        tong += a[i];

    }
    double trungbinh = tong / n;
    for(int i = 0; i < n; i++){
        if(a[i] >= trungbinh){
            cout << a[i];
        }
    }
}