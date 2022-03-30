// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int gcd(int a, int b){
    if (a == 0) return b;
    else if (b == 0) return a;
    else if (a < b) return gcd(b, a);
    else if (a % 2 == 0 && b % 2 == 0) return 2 * gcd(a / 2, b / 2);
    else if (a % 2 == 1 && b % 2 == 1) return gcd(b, a - b);
    else if (a % 2 == 0 && b % 2 == 1) return gcd(a / 2, b);
    else return gcd(a, b / 2);
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}