#include <iostream>
#include <algorithm>
using namespace std;

void getAnswer(int n, int m){
    if(max(n,m) % min(n,m) == 0){
        cout << max(n,m);
    }else{
        for(int i = max(n,m) *2 ; i<= n*m; i++){
            if(i % n == 0 && i % m == 0){
                cout << i;
                break;
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    getAnswer(n,m);
    return 0;
}