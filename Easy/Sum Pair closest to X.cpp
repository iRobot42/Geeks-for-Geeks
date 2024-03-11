vector< int > sumClosest( vector< int > a, int x ) {
    size_t l{}, r{ a.size()-1 }, f{}, s{};
    int d( 1e6 );
    do { const int X{ a[ l ] + a[ r ] };
         const int D{ abs( X - x ) };
        if ( D < d ) d = D, f = l, s = r;
        X < x ? ++l : --r;
    } while ( l < r );
    return { a[ f ], a[ s ] };
}
