int pairsum( vector< int >& arr ) {
    int a{}, b{};
    for ( const int n : arr )
        if ( n >= a ) b = a, a = n;
        else if ( n > b ) b = n;
    return a + b;
}
