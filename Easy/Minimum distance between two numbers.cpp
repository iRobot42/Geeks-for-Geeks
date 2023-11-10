int minDist( int a[], int n, int x, int y ) {
    int d{ INT_MAX }, ix{ -1 }, iy{ -1 };
#   define MIN d = min( d, abs( ix - iy ))
    while ( n-- ) if ( a[ n ] == x ) { ix = n; if ( iy >= 0 ) MIN; }
             else if ( a[ n ] == y ) { iy = n; if ( ix >= 0 ) MIN; }
    return d < INT_MAX ? d : -1;
}
