#include<iostream>
using namespace std;
// a  = q0 . b + r0
// b  = q1 . r0 + r1
// r0 = q2 . r1 + r2
// ...
// r(k-2) = q(k) . r(k-1) + r(k)

int GCD(int a, int b) {
    if (a < b) {
        swap (a, b);
    }

    int r0 = a;
    int r1 = b;
    int r2 = a % b ;

    while (r2 != 0) {
        r0 = r1;
        r1 = r2;
        r2 = r0 % r1;
    }

    return r1;
}