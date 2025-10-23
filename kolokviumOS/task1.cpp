#include <iostream>
#include <limits>

using namespace std;


bool fib(long long n, long long& result) {
    if (n == 0) { result = 0; return true; }
    if (n == 1) { result = 1; return true; }
    if (n > 92) return false; 

    long long a = 0, b = 1;
    for (long long i = 2; i <= n; ++i) {
        long long c = a + b;
        a = b;
        b = c;
    }
    result = b;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "Enter n to count Fibonacci: ";

    long long n;
    if (!(cin >> n)) {
        cerr << "Input error: expected integer.\n";
        return 1;
    }
    if (n < 0) {
        cerr << "Invalid input: n must be > 0"<< endl;
        return 1;
    }

    long long value;
    if (fib(n, value)) {
        cout << value << '\n';
        return 0;
    }

   
    cerr << "Overflow: exact Fibonacci for n = " << n;
        
    return 1;
}
