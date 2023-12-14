#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            cout << i << " is a multiple of 3 or 5" << endl;
            sum += i;
        }
    }
    
    cout << "The sum of all multiples of 3 or 5 up to " << n << " is: " << sum << endl;
    
    return 0;
}

