#define V1

#ifdef V1 // O(1), for 32-bit int
string isPowerof3( int n ) {
    return 1'162'261'467 % n ? "No" : "Yes";
} // 0.01+

#elif defined( V2 ) // O(logN/log3), for any int
string isPowerof3( int n ) {
    while (!( n % 3 )) n /= 3;
    return n == 1 ? "Yes" : "No";
} // 0.01+

#endif
