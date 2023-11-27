long long findMaxValue( long long a[], int n ) {
    if ( n < 4 ) return -1;
    long long aj{  0 - a[ 0 ] },
              ai{ aj + a[ 1 ] },
              al{ ai - a[ 2 ] },
              ak{ al + a[ 3 ] };
    for ( int i{ 4 }; i < n; ++i )
        aj = max( aj,  0 - a[ i-3 ] ),
        ai = max( ai, aj + a[ i-2 ] ),
        al = max( al, ai - a[ i-1 ] ),
        ak = max( ak, al + a[ i ] );
    return ak;
}
