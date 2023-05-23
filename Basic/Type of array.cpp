pair< long long, int > maxNtype( long long a[], long long n ) {
    long long min{}, max{};
    while ( n-- ) if ( a[ n ] < a[ min ] ) min = n;
             else if ( a[ n ] > a[ max ] ) max = n;
    return { a[ max ], !min && max > 1 ? 1 :
        !max && min > 1 ? 2 : min < max ? 3 : 4 };
} // T: 0.39 - 0.43
