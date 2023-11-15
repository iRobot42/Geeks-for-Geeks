#include <numeric>
int findEquilibrium( int a[], int n ) {
    int psum{}, ssum{ accumulate( a, a + n, 0 )};
    for ( int i{}; i < n; ++i ) {
        ssum -= a[ i ];
        if ( psum == ssum ) return i;
        psum += a[ i ];
    }
    return -1;
}
