#include <iostream>
using namespace std;


int fiboRekursiv(int n) {
    if (n < 1) {
        std::cout << "-1";
    }
    else if (n == 0){
        return 0;}

    else if (n == 1){
        return 1;}
    else {
    return fiboRekursiv(n-1)+fiboRekursiv(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << fiboRekursiv(n) << endl;
}