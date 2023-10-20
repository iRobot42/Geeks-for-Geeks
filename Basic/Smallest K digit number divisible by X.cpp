long long smallestKDigitNum( long long x, long long k ) {
    return ( k = pow( 10, --k )) % x ? ( k += x ) - k % x : k;
} // 0.01+
