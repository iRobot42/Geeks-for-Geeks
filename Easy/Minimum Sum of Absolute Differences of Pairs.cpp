long long findMinSum( vector< int >& a,
                      vector< int >& b, int n ) {
    sort( a.begin(), a.end() );
    sort( b.begin(), b.end() );
    long long sum{};
    while ( n-- ) sum += abs( a[ n ] - b[ n ] );
    return sum;
}
