#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int a){
    if(a > 1)
        a = fibonacci(a - 1) + fibonacci(a -2);
    return a;
}
