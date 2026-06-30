#include <iostream>
using namespace std;

int n;

void printRect(){
    int num = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << num << " ";
            if(num == 9){
                num = 1;
            }else{
                num++;
            }
        }
        cout << endl;
    }
}

int main() {
    cin >> n;

    printRect();
    return 0;
}