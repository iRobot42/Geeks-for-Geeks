int lucky( long long a[], int n ) {
    unordered_set< long long > s;
    while ( n-- ) {
        long long sum{};
        do sum += a[ n ] % 10;
        while ( a[ n ] /= 10 );
        s.insert( sum );
    }
    return s.size();
}
