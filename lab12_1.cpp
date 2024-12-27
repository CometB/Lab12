#include<iostream>
using namespace std;

long long fibo[100] = {};

long long fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long fibonacci(int x){
    if(x == 0) return 0;
    if(x == 1) return 1;
    if(fibo[x]) return fibo[x];
    fibo[x] = fibonacci(x-1) + fibonacci(x-2);
    return fibo[x];
}
