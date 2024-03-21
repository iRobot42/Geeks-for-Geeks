bool isProduct( int arr[], int n, long long x ) {
    unordered_set< int > s( arr, arr + n );
    for ( const int i : s )
        if ( i && !( x % i ) && s.find( x / i ) != s.cend() )
            return true;
    return false;
}
