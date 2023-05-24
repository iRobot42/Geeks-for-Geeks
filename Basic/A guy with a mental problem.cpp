typedef long long int lli;
lli minTime( lli a[], lli b[], lli n ) {
    lli t1{}, t2{};
    while ( n-- )
        t1 += n & 1 ? a[ n ] : b[ n ],
        t2 += n & 1 ? b[ n ] : a[ n ];
    return min( t1, t2 );
} // T: 0.37 - 0.42
