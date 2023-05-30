string winner( int x, int m, int n, long long a[] ) {
    int c{};
    while ( x-- ) if ( !( a[ x ] % m ) ) ++c;
             else if ( !( a[ x ] % n ) ) --c;
    return !c ? "Both" : c > 0 ? "Ram" : "Rohan";
} // T: 0.01+
