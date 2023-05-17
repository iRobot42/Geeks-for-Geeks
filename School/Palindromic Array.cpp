int PalinArray( int a[], int n ) {
    while ( n-- ) {
        const string s{ to_string( a[ n ] ) };
        auto f{ &s.front() }, b{ &s.back() };
        while ( f < b ) if ( *f++ != *b-- ) return 0;
    }
    return 1;
} // T: 0.01
