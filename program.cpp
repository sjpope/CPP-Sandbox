#include <iostream>
using namespace std;

unsigned int dexp(unsigned int x, unsigned int y, unsigned int n) {
    unsigned int result = 1;
    x = x % n;  
    
    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            result = (result * x) % n;
        
        // y /= 2, x = x^2 % n

        y = y >> 1;
        x = (x * x) % n;
    }
    return result;
}

int main() {
    unsigned int x = 35, y = 77, n = 83; 
    cout << "Result of (35^77) % 83 is " << dexp(x, y, n) << endl;
    return 0;
}
