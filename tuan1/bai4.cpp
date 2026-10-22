#include<iostream>
using namespace std;
void rutgon(int &a, int &b){
    for (int i = b; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            a /= i;
            b /= i;
            break;
        }
    }
}
int main(){
    int a, b;
    cin >> a >> b;
    rutgon(a, b);
    cout << a << "/" << b;

}