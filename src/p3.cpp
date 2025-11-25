// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;


bool isPrime(int n){

    for (int i = 2; i < n; i ++){
        
        if (n % i == 0) return 1;
    }

}

int a(int n){

    if (n == 10  || n == 100  || n == 50 || n == 1000) return 3;

    else return 2;

}

int main() {
    
    int n;
    cin >> n;
    cout << a(n) << " "  << n - a(n);
    return 0;
}
