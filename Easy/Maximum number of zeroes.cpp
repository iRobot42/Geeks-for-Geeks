string MaxZero( string a[], int n ) {
    string s;
    for ( int i{}, z{ 1 }; i < n; ++i ) {
        const int c{ count( a[ i ].cbegin(), a[ i ].cend(), '0' )};
        if ( c == z ) {
            if ( a[ i ].size() == s.size() ) s = max( s, a[ i ] );
            else if ( a[ i ].size() > s.size() ) s = a[ i ];
        } else if ( c > z ) s = a[ i ], z = c;
    }
    return s.empty() ? "-1" : s;
}
