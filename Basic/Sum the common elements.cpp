int commonSum( int n1, int n2, vector< int >& a1, vector< int >& a2 ) {
    unordered_set< int > s( a1.cbegin(), a1.cend() );
    int sum{}, d = 1e9 + 7;
    for ( const int i : a2 ) if ( s.find( i ) != s.cend() )
        s.erase( i ), sum += i, sum %= d;
    return sum;
} // 0.41+
