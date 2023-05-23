int checkFib( long long a[], int n ) {
    int c{};
    while ( n-- ) {
        const long long
            t1{ 5 * a[ n ] * a[ n ] - 4 }, s1{ sqrt( t1 ) },
            t2{ 5 * a[ n ] * a[ n ] + 4 }, s2{ sqrt( t2 ) };
        if ( s1 * s1 == t1 || s2 * s2 == t2 ) c++;
    }
    return c;
} // T: 0.07 - 0.08
