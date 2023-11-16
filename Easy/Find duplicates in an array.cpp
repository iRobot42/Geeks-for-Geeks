vector< int > duplicates( long long a[], int n ) {
#define LOOP for ( int i{}; i < n; ++i )
    LOOP a[ a[ i ] % n ] += n;
    vector< int > v;
    LOOP if ( a[ i ] / n > 1 ) v.push_back( i );
    return v.empty() ? vector< int >{ -1 } : v;
}
