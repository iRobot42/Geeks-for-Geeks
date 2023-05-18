const int S{ 100 };
void multiply( int a[][ S ], int b[][ S ], int c[][ S ], int n ) {
    fill( **&c, *&c[ n ], 0 );
    for ( int i{}; i < n; ++i )
        for ( int j{}; j < n; ++j )
            for ( int k{}; k < n; ++k )
                c[ i ][ j ] += a[ i ][ k ] * b[ k ][ j ];
} // T: 0.01
