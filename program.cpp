#include <iostream>
using namespace std;

unsigned int dexp(unsigned int x, unsigned int y, unsigned int n) {
    unsigned int result = 1;
    x = x % n;  // Update x if it is more than or equal to n
    
    while (y > 0) {
        // If y is odd, multiply x with the result
        if (y & 1)
            result = (result * x) % n;
        
        // Right shift y by 1
        y = y >> 1;
        
        // Change x to x^2
        x = (x * x) % n;
    }
    return result;
}

int main() {
    unsigned int x = 35, y = 77, n = 83;
    cout << "Result of (35^77) % 83 is " << dexp(x, y, n) << endl;
    return 0;
}
