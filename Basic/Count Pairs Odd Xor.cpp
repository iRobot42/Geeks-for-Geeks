long long countXorPair( long long a[], int n ) {
    long long e{}, o{};
    while ( n-- ) a[ n ] & 1 ? o++ : e++;
    return e * o;
} // T: 0.21 - 0.24
