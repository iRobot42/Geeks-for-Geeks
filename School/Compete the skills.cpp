void scores( long long a[], long long b[], int& ca, int& cb ) {
    for ( int i{}; i < 3; ++i )
        if ( a[ i ] != b[ i ] )
            a[ i ] > b[ i ] ? ca++ : cb++;
} // T: 0.01
