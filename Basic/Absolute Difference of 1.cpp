typedef long long int LLI;
vector< LLI > getDigitDiff1AndLessK( LLI* a, int n, LLI k ) {
    vector< LLI > v;
    for ( int i{}; i < n; ++i ) {
        if ( a[ i ] < 10 || a[ i ] >= k ) continue;
        LLI t{ a[ i ] };
        bool f{};
        do { const int d{ t % 10 };
            f = abs( ( t /= 10 ) % 10 - d ) != 1;
        } while ( !f && t > 9 );
        if ( !f ) v.push_back( a[ i ] );
    }
    return v;
} // T: 0.35+
