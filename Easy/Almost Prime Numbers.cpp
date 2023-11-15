void printKAlmostPrimes( int k, int n ) {
    for ( int number{ 2 }; n; ++number ) {
        int fcount{}, temp{ number };
        for ( const int prime : { 2, 3, 5, 7, 11, 13 })
            while (!( temp % prime )) temp /= prime, ++fcount;
        if ( fcount + ( temp != 1 ) == k ) {
            cout << number << ' ';
            --n;
        }
    }
}
