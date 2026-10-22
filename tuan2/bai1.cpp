#include<iostream>
using namespace std;
void themdau(int a[],int &n,int k){
    for(int i = n; i > 0;i--){
        a[i]= a[i-1];
    }
    a[0] = k;
    n++;
}
void themcuoi(int a[],int &n,int k){
    a[n] = k;
    n++;
}
void themgiua(int a[],int &n,int k, int x){
    for(int i = n; i< k;i++){
        a[i]= a[i-1];
    }
    a[k]=x;
    n++;
}
int main(){
    int a[100];
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
}