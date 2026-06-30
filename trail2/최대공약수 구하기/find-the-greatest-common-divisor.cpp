#include <iostream>
using namespace std;

void getCGD(int n, int m){
    int rest = n % m;
    while(rest != 0){
        n = m;
        m = rest;
        rest = n % m;
    }
    cout << m;
}

int main() {
    int n, m;
    cin >> n >> m;

    getCGD(n,m);
    return 0;
}