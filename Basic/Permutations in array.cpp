bool isPossible( long long a[], long long b[], int n, long long k ) {
    while ( n-- ) if ( a[ n ] + b[ n ] >= k ) return true;
    return false;
} // T: 0.42 - 0.48
